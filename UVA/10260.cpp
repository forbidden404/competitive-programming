#include <bits/stdc++.h>

using namespace std;

char getCh(char c) {
    switch (c) {
        case 'B':
        case 'F':
        case 'P':
        case 'V':
            return '1';
            break;
        case 'C':
        case 'G':
        case 'J':
        case 'K':
        case 'Q':
        case 'S':
        case 'X':
        case 'Z':
            return '2';
            break;
        case 'D':
        case 'T':
            return '3';
            break;
        case 'L':
            return '4';
            break;
        case 'M':
        case 'N':
            return '5';
            break;
        case 'R':
            return '6';
            break;
        default:
            return 0;
            break;
    }
}

int main() {
    char line[22];
    while (scanf("%s%*c", line) != EOF) {
        char value[22];
        int j = 0;
        char previous = 0;
        for (int i = 0; line[i]; i++) {
            char c = getCh(line[i]);

            if (c == 0) { 
                previous = c;
                continue; 
            }
            if (j != 0) {
                if (previous != c) {
                    value[j++] = c;
                }
            } else {
                value[j++] = c;
            }

            previous = c;
        }

        value[j] = 0;
        cout << value << endl;
    }
}
