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
#define sz(a)           int((a).size())
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

#define NO_ERROR 0
#define DIV_ZERO 1
#define INV_EXPR 2

char input[100000];

int main() {
    stack<char> op_stack;
    while (fgets(input, 100000, stdin) != NULL) {
        int consec_op = 0;
        int div_op = 0;
        int status = NO_ERROR;
        for (auto i = 0; input[i] != '\n' && input[i] != '\0' && status != NO_ERROR; i += 2) {
            if (!isdigit(input[i])) {
                consec_op++;
                if (consec_op > 1) {
                    status = INV_EXPR;
                    break;
                }
                if (input[i] == '/')
                    div_op++;
                else
                    div_op = 0;
            } else if (input[i] == '0' && div_op != 0){
                status = DIV_ZERO;
                break;
            } else {
                consec_op = 0;
                div_op = 0;
            }
            op_stack.push(input[i]);
            while (!op_stack.empty()) {
                char tmp = op_stack.pop();
            }
        }
    }
    return 0;
}
