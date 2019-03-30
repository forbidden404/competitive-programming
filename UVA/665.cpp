#include <bits/stdc++.h>

using namespace std;

int main() {
    int m;
    cin >> m;

    while (m--) {
        int n, k;
        cin >> n >> k;

        bool coins[105];
        memset(coins, false, sizeof(coins));
        
        while (k--) {
            int p;
            cin >> p;

            bool coinsWeighted[105];
            memset(coinsWeighted, false, sizeof(coins));

            string line;
            getline(cin, line);
            istringstream stream(line);
            int number;

            while (stream >> number) {
                coinsWeighted[number] = true;
            }

            getline(cin, line);
            if (line[0] == '=') {
                for (int i = 1; i <= n; i++) {
                    if (coinsWeighted[i]) coins[i] = true;
                }
            } else {
                for (int i = 1; i <= n; i++) {
                    if (!coinsWeighted[i]) coins[i] = true;
                }
            }
        }

        bool success = false;
        int previous = 0;
        for (int i = 1; i <= n; i++) {
            if (!coins[i] && previous != 0) {
                success = false; 
            } else if (!coins[i]) {
                previous = i;
                success = true;
            }
        }

        if (success) { cout << previous << "\n"; }
        else { cout << "0\n"; }

        if (m != 0) { cout << "\n"; }
    }

    return 0;
}
