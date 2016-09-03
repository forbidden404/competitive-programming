#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int r = a + b + c;
	r = r % 24;
	if (r < 0)
		r = 24 + r;
	printf("%d\n", r);
	return 0;
}
