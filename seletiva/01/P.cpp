#include <bits/stdc++.h>

using namespace std;

int f(int n) {
	if (n <= 100)
		return f(f(n+11));
	else
		return n - 10;
}
int main()
{
	int a;
	while (scanf("%d", &a) != EOF) {
		if (a == 0)
			break;
		printf("f91(%d) = %d\n", a, f(a));
	}
	return 0;
}

