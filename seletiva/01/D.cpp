#include <bits/stdc++.h>
#define BUFFER 256

using namespace std;

int main()
{
	int a, b, c;

	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		if (a == b && b == c)
			printf("*");
		else if (a == b && b != c)
			printf("C");
		else if (b == c && a != b)
			printf("A");
		else 
			printf("B");
		printf("\n");
	}

	return 0;
}


