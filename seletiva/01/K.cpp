#include <bits/stdc++.h>

char minefield[103][103];

int main()
{
	int r, c;
	scanf("%d %d", &r, &c);
	while (r != 0) {
		scanf("%*c");
		int i, j;
		for(i = 1; i <= r; i++) {
			for (j = 1; j <= c; j++) {
				scanf("%c", &minefield[i][j]); 
			}
			scanf("%*c");
		}
		for(i = 1; i <= r; i++) {
			for (j = 1; j <= c; j++) {
				if (minefield[i][j] == '.') {
					char cont = '0';
					if (minefield[i-1][j] == '*')
						cont++;
					if (minefield[i-1][j-1] == '*')
						cont++;
					if (minefield[i-1][j+1] == '*')
						cont++;
					if (minefield[i][j-1] == '*')
						cont++;
					if (minefield[i][j+1] == '*')
						cont++;
					if (minefield[i+1][j-1] == '*')
						cont++;
					if (minefield[i+1][j] == '*')
						cont++;
					if (minefield[i+1][j+1] == '*')
						cont++;
					minefield[i][j] = cont;
				}
				printf("%c", minefield[i][j]); 
			}
			printf("\n");
		}
		scanf("%d %d", &r, &c);
	}

	return 0;
}
