#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;
#define INF 1000000000
#define SET(a)          memset(a, -1, sizeof(a))
#define CLR(a)          memset(a, 0, sizeof(a))
#define MEM(a, val)     memset(a, val, sizeof(a))
#define sz(a)           ((int)(a).size())
#define sqr(x)          ((x)*(x))
#define sf              scanf
#define pf              printf
#define sf1(a)          scanf("%d", &a)
#define sf2(a,b)        scanf("%d %d", &a, &b)
#define sf3(a,b,c)      scanf("%d %d %d", &a, &b, &c)
#define sf4(a,b,c,d)    scanf("%d %d %d %d", &a, &b, &c, &d)
#define sf1ll(a)        scanf("%I64d", &a)
#define sf2ll(a,b)      scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)    scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c,d)  scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)
#define REP(i, n)       for(int i = 0; i < (n); i++)
#define FOR(i, a, b)    for(int i = (a); i <= (b); i++)
#define FORD(i, a, b)   for(int i = (a); i >= (b); i--)

int main() {
    int size, turn = 1;
    while (sf1(size), size) {
        pf("Output for data set %d, %d bytes:\n", turn++, size);
        int counter = 0, sum = 0, received = 0, transfer = 0;
        sf1(transfer);
        while (received != size) {
            sum += transfer;
            received += transfer;
            if (!(++counter % 5)) {
                if (sum == 0){
                    pf ("   Time remaining: stalled\n");
                } else {
                    double time_r = 5*(size - received)/(double)sum;
                    sum = (int) ceil(time_r);
                    pf("   Time remaining: %d seconds\n", sum);
                    sum = 0;
                }
            }
            if (received == size)
                break;
            sf1(transfer);
        }
        pf("Total time: %d seconds\n\n", counter);
    }
    return 0;
}
