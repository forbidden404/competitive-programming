#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (scanf("%d", &n), (n)) {
        vector<long> cars;
        vector<long> newPositions(n+1, -1);

        long c, p;
        bool isWorking = true;
        for (int i = 0; i < n; i++) {
            scanf("%ld %ld", &c, &p);
            if (!isWorking) { continue; } 
            int index = cars.size() + p;

            if (index >= n || index < 0) {
                printf("-1\n");
                isWorking = false;
                continue;
            }

            if (newPositions[index] != -1) {
                printf("-1\n");
                isWorking = false;
                continue;
            }

            newPositions[index] = cars.size();
            cars.push_back(c);
        }

        if (isWorking) {
            for (int i = 0; i < cars.size(); i++) {
                if (i != 0) { cout << ' '; }
                cout << cars[newPositions[i]];
            }
            printf("\n");
        }
    }
    return 0;
}
