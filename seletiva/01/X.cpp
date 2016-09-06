#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	long long int n = b - a + 1;
	long long int s = ((a + b) * n)/2;
	printf("%lld\n", s);
	return 0;
}

