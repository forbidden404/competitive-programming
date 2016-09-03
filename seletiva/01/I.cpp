#include <bits/stdc++.h>
#define BUFFER 256

using namespace std;

int compare(const void *a, const void *b) {
	if (*(int *)a < *(int *)b)
		return 1;
	else if (*(int *)a > *(int *)b)
		return -1;
	else
		return 0;
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int scores[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &scores[i]);
	}

	qsort(scores, n, sizeof(int), compare);
	
	for (int i = 0; i < m; i++)
		printf("%d\n", scores[i]);

	return 0;
}
