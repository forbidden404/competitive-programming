#include <iostream>

int main() {
    int cases;
    int curCase = 1;
    while (scanf("%d", &cases) != EOF) {
        while (cases--) {
            int speed = 0;

            int creatures;
            scanf("%d", &creatures);

            for (int i = 0; i < creatures; i++) {
                int actualSpeed;
                scanf("%d", &actualSpeed);

                if (actualSpeed > speed) {
                    speed = actualSpeed;
                }
            }

            printf("Case %d: %d\n", curCase++, speed);
        }
    }
}