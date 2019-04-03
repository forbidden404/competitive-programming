#include <bits/stdc++.h>

using namespace std;

int main() {
    int s;
    int TC = 1;
    while (scanf("%d", &s), (s >= 0)) {
        int available = s;

        vector<int> required;
        required.resize(12);

        vector<int> created;
        created.resize(12);

        for (int i = 0; i < 12; i++) {
            cin >> created[i];
        }

        for (int i = 0; i < 12; i++) {
            cin >> required[i];
        }

        printf("Case %d:\n", TC++);
        for (int i = 0; i < 12; i++) {
            if (available - required[i] >= 0) {
                printf("No problem! :D\n");
                available -= required[i];
            } else {
                printf("No problem. :(\n");
            }

            available += created[i];
        }
    }

    return 0;
}
