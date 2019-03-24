#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        int k;
        long long map[256] = {};
        long long answer = 0;
        scanf("%d ", &k);
        char str[10256];
        while (k--) {
            gets(str);
            long long v;
            sscanf(str+2, "%lld", &v);
            map[str[0]+128] = v;
        }

        scanf("%d ", &k);
        while (k--) {
            gets(str);
            for (int i = 0; str[i]; i++) {
                answer += map[str[i]+128];
            }
        }


        printf("%lld.%02lld$\n", answer/100, answer%100);
    }

    return 0;
}
