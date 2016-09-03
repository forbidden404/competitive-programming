#include <bits/stdc++.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int qtd = (b - (a - 1));
	if (qtd <= 0)
		printf("0\n");
	int sum = (qtd/2) * (a + b);
	if ((a + b) % 2 == 0)
		sum += (a + b) / 2;
	printf("%d\n", sum);
	return 0;
}

