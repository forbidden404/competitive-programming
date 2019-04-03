#include <bits/stdc++.h>

using namespace std;

int solved[10100];
int main() {
    int TC;
    cin >> TC;

    for (int i = 1; i <= TC; i++) {
        memset(solved, 0, sizeof(solved));
        vector< unordered_set<int> > friends;
        friends.resize(3);

        // read numbers
        for (int j = 0; j < 3; j++) {
            int s;
            cin >> s;
            friends[j].reserve(s);

            while (s--) {
                int number;
                cin >> number;
                friends[j].insert(number);
            }
        }

        for (int j = 0; j < 3; j++) {
            for (auto c : friends[j]) {
                solved[c]++; 
            }
        }

        // check unique solutions
        vector< vector<int> > solutions;
        solutions.resize(3);
        int max = 0;
        for (int j = 0; j < 3; j++) {
            for (auto c : friends[j]) {
                if (solved[c] == 1) {
                    solutions[j].push_back(c);
                    if (solutions[j].size() > max) max = solutions[j].size();
                }
            }
        }

        // sort unique solutions array
        sort(solutions[0].begin(), solutions[0].end());
        sort(solutions[1].begin(), solutions[1].end());
        sort(solutions[2].begin(), solutions[2].end());

        // print every friend with max unique solutions
        printf("Case #%d:\n", i);
        for (int j = 0; j < 3; j++) {
            if (solutions[j].size() == max) {
                printf("%d %d", j+1, max); 
                for (int k = 0; k < max; k++) {
                    printf(" %d", solutions[j][k]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
