#include <cstdio>

int getSuitFromChar(char suit) {
    if (suit == 'S') {
        return 0;
    } else if (suit == 'H') {
        return 1;
    } else if (suit == 'D') {
        return 2;
    } else {
        return 3;
    }
}

char getSuitFromInt(int suit) {
    if (suit == 0) {
        return 'S';
    } else if (suit == 1) {
        return 'H';
    } else if (suit == 2) {
        return 'D';
    } else {
        return 'C';
    }
}

int main() {
    char lines[13][3];

    while (scanf("%s %s %s %s %s %s %s %s %s %s %s %s %s%*c", lines[0], lines[1], lines[2], lines[3], lines[4],
                 lines[5], lines[6], lines[7], lines[8], lines[9], lines[10], lines[11], lines[12]) != EOF) {
        int points = 0;
        int ignoringPoints = 0;
        // 0 => S | 1 => H | 2 => D | 3 => C
        int suits[4] = {0};
        bool allSuitsAreStopped[4] = {false};
        bool hasKing[4] = { false };
        bool hasQueen[4] = { false };
        bool hasJack[4] = { false };
        int chosenSuit = 0;

        // counting points
        for (int i = 0; i < 13; i++) {
            if (lines[i][0] == 'A') {
                points += 4;
                ignoringPoints += 4;
                allSuitsAreStopped[getSuitFromChar(lines[i][1])] = true;
            } else if (lines[i][0] == 'K') {
                points += 3;
                ignoringPoints += 3;
                int suit = getSuitFromChar(lines[i][1]);
                hasKing[suit] = true;
            } else if (lines[i][0] == 'Q') {
                points += 2;
                ignoringPoints += 2;
                int suit = getSuitFromChar(lines[i][1]);
                hasQueen[suit] = true;
            } else if (lines[i][0] == 'J') {
                points++;
                ignoringPoints++;
                int suit = getSuitFromChar(lines[i][1]);
                hasJack[suit] = true;
            }
            suits[getSuitFromChar(lines[i][1])]++;
        }

        for (int i = 0; i < 4; i++) {
            if (suits[i] > suits[chosenSuit])
                chosenSuit = i;
            if (suits[i] == 0 || suits[i] == 1) {
                points += 2;
            }
            if (suits[i] == 2) {
                points += 1;
            }
            if (hasKing[i] && suits[i] <= 1) {
                points--;
                ignoringPoints--;
            } else if (hasKing[i]) {
                allSuitsAreStopped[i] = true;
            }
            if (hasQueen[i] && suits[i] <= 2) {
                points--;
                ignoringPoints--;
            } else if (hasQueen[i]) {
                allSuitsAreStopped[i] = true;
            }
            if (hasJack[i] && suits[i] <= 3) {
                points--;
                ignoringPoints--;
            } 
        }

        bool hasStopped = true;
        for (int i = 0; i < 4; i++) {
            if (!allSuitsAreStopped[i])
                hasStopped = false;
        }

        if (ignoringPoints >= 16 && hasStopped) {
            puts("BID NO-TRUMP");
        } else if (points >= 14) {
            if (chosenSuit == 0) {
                puts("BID S");
            } else if (chosenSuit == 1) {
                puts("BID H");
            } else if (chosenSuit == 2) {
                puts("BID D");
            } else {
                puts("BID C");
            }
        } else {
            puts("PASS");
        }
    }
}