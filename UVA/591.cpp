#include <bits/stdc++.h>

using namespace std;

int main() {
    int sets;
    int c = 1;

    while (scanf("%d", &sets), sets) {
        printf("Set #%d\n", c++);

        int number;
        int sum = 0;
        vector<int> heights;
        for (int i = 0; i < sets; i++) {
            cin >> number;
            sum += number;
            heights.push_back(number);
        }

        int average = sum / sets;
        int answer = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] > average) { 
                answer += heights[i] - average;
            }
        }

        cout << "The minimum number of moves is " << answer << "." << endl;
        cout << endl;
    }

    return 0;
}
