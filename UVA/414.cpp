#include <bits/stdc++.h>

using namespace std;

int main() {
    int lines;
    while (scanf("%d%*c", &lines), (lines)) {
        int smallest = INT_MAX;
        char line[30];
        int status[14];
        memset(status, -1, sizeof(status));
        while (lines--) {
            fgets(line, 30, stdin);
            int actual = 0;
            for (int i = 0; i < 25; i++) {
                if (line[i] == ' ') actual++; 
            }
            status[lines] = actual;
            smallest = min(smallest, actual);
        }

        int value = 0;
        for (int i = 0; status[i] != -1; i++) {
            if (status[i] > smallest) { value += (status[i] - smallest); }
        }
        printf("%d\n", value);
    }

    return 0;
}
