#include <bits/stdc++.h>

using namespace std;

int fat(int a);

int main()
{
	int a, b;
	scanf("%d", &a);
	printf("%d\n", fat(a));
	return 0;
}

int fat (int a) {
	int i = 1;
	int resposta = 1;
	for (; i <= a; i++)
		resposta *= i;
	return resposta;
}
