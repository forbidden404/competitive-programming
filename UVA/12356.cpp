#include <stdio.h>

int left[100005], right[100005];

int main() {
    int S, B;
    while (scanf("%d %d", &S, &B), S || B) {
        for (int i = 1; i <= S; i++) {
            left[i] = i - 1;
            right[i] = i + 1;
        }
        left[1] = -1;
        right[S] = -1;

        for (int i = 0; i < B; i++) {
            int l, r;
            scanf("%d %d", &l, &r);

            left[right[r]] = left[l];
            if (left[l] != -1) { printf("%d ", left[l]); }
            else { printf("* "); }

            right[left[l]] = right[r];
            if (right[r] != -1) { printf("%d\n", right[r]); }
            else { printf("*\n"); }
        }
        
        printf("-\n");
    }
    return 0;
}
