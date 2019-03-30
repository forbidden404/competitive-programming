#include <bits/stdc++.h>

using namespace std;

int main() {
    int c;

    cin >> c;
    while (c--) {
        scanf("%*c");
        scanf("%*c");

        string line;
        getline(cin, line);

        istringstream stream(line);
        vector<int> indexes;
        int number;
        while (stream >> number)
            indexes.push_back(number);

        vector<string> floatNumbers;
        floatNumbers.resize(indexes.size());
        for (int i = 0; i < indexes.size(); i++) {
            string word;
            cin >> word;
            floatNumbers[indexes[i]-1] = word;
        }

        for (auto w : floatNumbers) { cout << w << endl; } 
        if (c != 0) cout << endl;
    }

    return 0;
}
