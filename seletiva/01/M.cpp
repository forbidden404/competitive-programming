#include <bits/stdc++.h>

using namespace std;

char name[20];

int main()
{
	int input;
	int ep = 0, mp = 0, lp = 0;
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		scanf("%s%*s%*c", name);
		if (strcmp(name, "Emperor") == 0)
			ep++;
		else if (strcmp(name, "Little") == 0)
			lp++;
		else
			mp++;
	}
	if (ep > lp && ep > mp)
		printf("Emperor Penguin\n");
	else if (lp > ep && lp > mp)
		printf("Little Penguin\n");
	else
		printf("Macaroni Penguin\n");
	return 0;
}

