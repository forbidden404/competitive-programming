#include <bits/stdc++.h>

using namespace std;

char rot(char a);
int turn = 0;

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
	if (a == '\n') {
		turn = 0;
		return a;
	}
	if (a != ' ') {
		if (turn == 0)
			c = toupper(a);
		else
			c = tolower(a);
		turn = (turn + 1) % 2;
	} 
	return c;
}

