#include <bits/stdc++.h>
#define BUFFER 256

using namespace std;

int main()
{
	int turns;
	int cases = 1;

	while (scanf("%d", &turns) != EOF) {
		if (turns == 0)
			break;
		if (cases != 1)
			printf("\n");
		char first[12];
		char second[12];

		int fw = 0;
		int sw = 0;

		scanf("%s%*c", first);
		scanf("%s%*c", second);	

		printf("Teste %d\n", cases++);
		while (turns-- > 0) {
			int a, b;
			scanf("%d %d", &a, &b);
			if ((a + b) % 2 == 0)
				printf("%s\n", first);
			else
				printf("%s\n", second);
		}

	}
	return 0;
}
