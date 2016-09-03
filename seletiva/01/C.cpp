#include <bits/stdc++.h>
#define BUFFER 256

using namespace std;

int main()
{
	int cases;
	scanf("%d", &cases);
	int a, b;

	while (cases-- > 0) {
		scanf("%d %d", &a, &b);
		if (a > b)
			printf(">");
		else if (a < b)
			printf("<");
		else
			printf("=");
		printf("\n");
	}

	return 0;
}

