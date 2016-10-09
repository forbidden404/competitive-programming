#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, x, y;
	while (scanf("%d %d %d %d", &a, &b, &x, &y) != EOF) {
		if (a == 0)
			break;
		int dx = abs(x - a);
		int dy = abs(y - b);

		if (a == x && b == y)
			printf("0\n");
		else if (dx == dy)
			printf("1\n");
		else if (dx == 0 || dy == 0)
			printf("1\n");
		else
			printf("2\n");
	}
	return 0;
}
