#include <bits/stdc++.h>

using namespace std;

int main() {
    int TC;
    while (scanf("%d", &TC), TC) {
        int index = -1;
        vector<string> cards(TC, "-");

        for (int i = 0; i < TC; i++) {
            string card;
            string word;
            cin >> card >> word;
            getchar();

            if (index == -1) {
                index = (index + word.length()) % TC;
            } else {
                for (int j = 0; j < word.length(); j++) {
                    index++;
                    index = (index) % TC;
                    while (cards[index] != "-") {
                        index++;
                        index = (index) % TC;
                    }
                }
            }

            cards[index] = card;
        }

        for (int i = 0; i < cards.size(); i++) {
            if (i != 0) { cout << ' '; }
            cout << cards[i];
        }
        cout << endl;
    }

    return 0;
}
