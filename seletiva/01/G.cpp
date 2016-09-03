#include <bits/stdc++.h>
#define BUFFER 256

using namespace std;

int main()
{

	int first[5];
	int second[5];
	while (scanf("%d %d %d %d %d", &first[0], &first[1], &first[2], &first[3], &first[4]) != EOF) {
		scanf("%d %d %d %d %d", &second[0], &second[1], &second[2], &second[3], &second[4]);		
		int i = 0;
		char answer = 'Y';
		for (i = 0; i < 5; i++) {
			if (first[i] == second[i]) {
				answer = 'N';
				break;
			}
		}

		printf("%c\n", answer);
	}

	return 0;
}




