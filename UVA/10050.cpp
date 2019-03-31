#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int p;
        cin >> p;

        set<int> days;
        
        for (int i = 0; i < p; i++) {
            int number;
            cin >> number;

            int actual = number;
            while (actual <= n) {
                if (actual % 7 != 0 && actual % 7 != 6) {
                    days.insert(actual); 
                }
                actual += number;
            }
        }

        cout << days.size() << endl;
    }

    return 0;
}
