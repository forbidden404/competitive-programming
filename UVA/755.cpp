#include <bits/stdc++.h>

using namespace std;

int main() {
    int c;
    cin >> c;

    char phone[12];
    char ch[] = "22233344455566677778889991";

    while (c--) {
        int phoneCount;
        cin >> phoneCount;
        getchar();

        map<string, int> phones;

        string line;
        while (phoneCount--) {
            getline(cin, line);
            while (line == "") { getline(cin, line); }

            int j = 0;
            for (int i = 0; i < line.length(); i++) {
                if (line[i] >= 'A' && line[i] <= 'Z') {
                    phone[j++] = ch[line[i] - 'A'];
                } else if (line[i] >= '0' && line[i] <= '9') {
                    phone[j++] = line[i];
                }

                if (j == 3) {
                    phone[j++] = '-';
                }
            }

            phone[j] = 0;
            phones[phone]++;
        }

        bool hasDuplicates = false;
        for (auto phone : phones) {
            if (phone.second != 1) {
                cout << phone.first << ' ' << phone.second << endl;
                hasDuplicates = true;
            }
        }

        if (!hasDuplicates) {
            cout << "No duplicates." << endl;
        }
        if (c) {
            cout << endl;
        }
    }

    return 0;
}
