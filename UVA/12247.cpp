#include <cstdio>
#include <algorithm>
#include <vector>

int main() {
    int a, b, c, x, y;
    while (scanf("%d %d %d %d %d", &a, &b, &c, &x, &y), (a || b || c || x || y)) {
        int lowestCard = -1;

        std::vector<int> princess;
        std::vector<int> prince;

        princess.reserve(3);
        prince.reserve(2);

        princess.push_back(a);
        princess.push_back(b);
        princess.push_back(c);
        std::sort(princess.begin(), princess.end());

        prince.push_back(x);
        prince.push_back(y);
        std::sort(prince.begin(), prince.end());

        // 3 47 5 10 8
        // 8 10
        // 3 5 47
        if (!(prince[1] < princess[0] || prince[1] < princess[1] || (prince[1] < princess[2] && prince[0] < princess[1]))) {
            if (prince[1] > princess[0]) {
                if (prince[0] < princess[2]) {
                    if (prince[0] > princess[1]) {
                        lowestCard = princess[1] + 1;
                    } else {
                        lowestCard = princess[2] + 1;
                    }
                } else if (prince[0] < princess[1]) {
                    lowestCard = princess[2] + 1;
                } else {
                    lowestCard = 1;
                }
            } else if (prince[0] > princess[1]) {
                lowestCard = princess[1] + 1;
            }
        }

        if (lowestCard != -1) {
            while (std::find(prince.begin(), prince.end(), lowestCard) != prince.end() || std::find(princess.begin(), princess.end(), lowestCard) != princess.end()) {
                lowestCard++;
            }
        }

        if (lowestCard > 52) lowestCard = -1;
        printf("%d\n", lowestCard);
    }
}