#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (scanf("%d", &n), n) {
        vector<int> stations;
        stations.resize(n);

        while (n--) {
            cin >> stations[n];    
        }

        sort(stations.begin(), stations.end());

        int actual = 0;
        bool isPossible = true;
        for (auto station : stations) {
            if ((actual + 200) >= station) {
                actual = station;
            } else {
                isPossible = false;
                break;
            }
        }

        if (actual < 1322) { isPossible = false; }

        printf("%s\n", isPossible ? "POSSIBLE" : "IMPOSSIBLE");
    }

    return 0;
}
