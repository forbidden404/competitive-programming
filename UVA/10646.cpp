#include <iostream>

char cards[52][3];

int main() {
    int a, b = 1;
    scanf("%d%*c", &a);
    while (a--) {
        for (int i = 0; i < 52; i++) {
            scanf("%s", cards[i]);
        }
        scanf("%*c");

        int y = 0;
        int top = 51;
        top -= 25;
        int removed = 0;

        for (int i = 0; i < 3; i++) {
            // Take the top card of the cards of the pile and determine its value
            char *card = cards[top];

            // Let the card value be X. Add X to Y
            int x = 0;
            switch (card[0]) {
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                    x = card[0] - '0';
                    break;
                default:
                    x = 10;
                    break;
            }
            y += x;

            // Put this card and the top (10 - X) cards of the pile away.
            top--;
            removed++;
            top -= (10 - x);
            removed += (10 - x);
        }

        /*
        *   [0<(51-25-removed)|removed|51-25<51]
        */
        char *ythCard;
        if (y < top) {
            ythCard = cards[y-1];
        } else {
            int pos = (y - top) + (top + removed);
            ythCard = cards[pos-1];
        }

        printf("Case %d: %s\n", b++, ythCard);
    }
}