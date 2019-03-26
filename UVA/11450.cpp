#include <bits/stdc++.h>

using namespace std;

int M, C, price[25][25];
int memo[210][25];
int shop(int money, int g) {
    if (money < 0) return -1000000000;
    if (g == C) return M - money;
    if (memo[money][g] != -1) return memo[money][g];
    int ans = -1;
    for (int model = 1; model <= price[g][0]; model++) {
        ans = max(ans, shop(money - price[g][model], g + 1));
    }
    return memo[money][g] = ans;
}

int main()
{
    int n, score;
    cin >> n;

    while(n--) {
        cin >> M >> C;

        for (int i = 0; i < C; i++) {
            scanf("%d", &price[i][0]);
            for (int j = 1; j <= price[i][0]; j++) {
                scanf("%d", &price[i][j]);
            }
        }
        memset(memo, -1, sizeof(memo));
        score = shop(M, 0);
        if (score < 0) printf("no solution\n");
        else printf("%d\n", score);
    }

    return 0;
}
