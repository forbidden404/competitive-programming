#include <bits/stdc++.h>

using namespace std;

bool isValid(int value, const vector<int> &v) {
    for (auto n : v) {
        if ((value % (n * 2)) >= (n - 5))
            return false;
    }

    return true;
}

int main() {
    int set = 1;

    string line;
    while (getline(cin, line)) {
        bool success = true;

        int number;
        int lowest = 100;

        vector<int> cycles;

        istringstream stream(line);
        while (stream >> number) {
            cycles.push_back(number);
            if (number < lowest) lowest = number;
        }
        if (cycles.empty()) return 0;

        int start = lowest * 2;
        while (!isValid(start, cycles) && start <= 3600)
            ++start;

        if (start == 3601) { success = false; }

        if (success) {
            printf("Set %d synchs again at %d minute(s) and %d second(s) after all turning green.\n", set++, start/60, start%60);
        } else {
            printf("Set %d is unable to synch after one hour.\n", set++);
        }
    }

    return 0;
}
