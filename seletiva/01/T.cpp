#include <bits/stdc++.h>

using namespace std;

char rot(char a);

int main()
{
 	char c;
	while (scanf("%c", &c) != EOF) {
		printf("%c", rot(c));
	}
	return 0;
}

char rot(char a)
{
	char c = a;
	if (a >= 'a' && a <= 'z') {
		int rotation = ((a - 'a') + 13) % (('z' - 'a') + 1);
		c = 'a' + rotation;
	}
	else if (a >= 'A' && a <= 'Z') {
		int rotation = ((a - 'A') + 13) % (('Z' - 'A') + 1);
		c = 'A' + rotation;
	}
	return c;
}
