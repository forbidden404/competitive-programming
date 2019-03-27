#include <bits/stdc++.h>

using namespace std;

/* A[0,1,2,3,...,D]
 *
 * B = base address of the array
 * D = Number of dimensions in the array
 * Ld = Lower bound of dimension d
 * Ud = Upper bound of dimension d
 * CD = array element size in bytes
 * Cd = Cd+1(Ud+1 - Ld+1 + 1) for 1 <= d < D
 * C0 = B - C1L1 - C2L2 - ... - CDLD
 */

struct Array {
    string name;
    int base;
    int dimensionSize;
    int lower[12];
    int upper[12];
    int answers[12];

    Array(string n, int b, int s, int d) : name(n), base(b), dimensionSize(d) {
        memset(answers, -1, sizeof(answers));
        answers[d] = s;
    }

    int answer(int d) {
        if (answers[d] != -1) { return answers[d]; }
        int value = 0;
        if (d == 0) {
            value = base;
            for (int i = 1; i <= dimensionSize; i++) {
                value -= answer(i)*lower[i];
            }
        } else {
            value = answer(d+1)*(upper[d+1] - lower[d+1] + 1);
        }
        answers[d] = value;
        return value;
    }

    int address(vector<int> v) {
        int value = answer(0);
        for (int i = 0; i < v.size(); i++) {
            value += answer(i+1)*v[i];
        }
        return value;
    }
};

int main() {
    int n, r;
    cin >> n >> r;

    unordered_map<string, Array *> hashMap;
    hashMap.reserve(n);

    while(n--) {
        string s;
        cin >> s;

        int b;
        cin >> b;

        int size;
        cin >> size;

        int d;
        cin >> d;

        auto arr = new Array(s, b, size, d);
        for (int i = 1; i <= d; i++) {
            int lower, upper;
            cin >> lower >> upper;
            arr->lower[i] = lower;
            arr->upper[i] = upper;
        }
        hashMap[arr->name] = arr;
    }

    while(r--) {
        string name;
        cin >> name;

        const bool is_in = hashMap.find(name) != hashMap.end();

        if (is_in) {
            auto arr = hashMap[name];
            vector<int> v(arr->dimensionSize);
            cout << arr->name << "[";
            for (int i = 0; i < arr->dimensionSize; i++) {
                if (i != 0) {
                    cout << ", ";
                }
                int val;
                cin >> val;
                v[i] = val;
                cout << val;
            }
            cout << "] = ";

            int address = arr->address(v);
            cout << address << endl;
        }
    }

    return 0;
}
