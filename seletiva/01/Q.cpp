#include <bits/stdc++.h>

int amostras[10001];

int main()
{
	int n = 0;
	scanf("%d", &n);

	int first = 0;

	while (n != 0) {
		int counter = 1;
		for (int i = 0; i < n; i++) {
			scanf("%d", &amostras[i]);
		}
		amostras[n] = amostras[0];
		for (int i = 1; i < n; i++) {
			if (amostras[i] > amostras[i - 1] 
				&& amostras[i] > amostras[i + 1])
				counter++;
			else if (amostras[i] < amostras[i - 1] 
				&& amostras[i] < amostras[i + 1])
				counter++;
			if (i == (n - 1)) {
				if (amostras[0] > amostras[1]
						&& amostras[0] < amostras[n - 1])
					counter--;
				else if (amostras[0] < amostras[1]
						&& amostras[0] > amostras[n - 1])
					counter--;	
			}
		}
		printf("%d\n", counter);
		scanf("%d", &n);
	}

	return 0;
}

