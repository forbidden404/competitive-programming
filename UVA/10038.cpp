#include <bits/stdc++.h>

using namespace std;

int vec[3100];

int main() {
    int n;

    while (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            int value;
            scanf("%d", &value);
            vec[i] = value;
        }

        if (n == 1) {
            cout << "Jolly" << endl;
        } else {
            int value = n*(n-1)/2;
            for (int i = 0; i < n-1; i++) {
                int mod = vec[i] - vec[i+1];   
                if (mod < 0) mod *= -1;
                value -= mod;
                if (mod == 0 || mod > n) {
                    value = 1;
                    break;
                }
            }

            if (value == 0) {
                cout << "Jolly" << endl;
            } else {
                cout << "Not jolly" << endl;
            }
        }
    }
}
