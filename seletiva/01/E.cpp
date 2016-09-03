#include <bits/stdc++.h>
#define BUFFER 256

using namespace std;

int main()
{
	int cases;
	scanf("%d", &cases);
	int actual = 1;
	int output = 0;

	while (actual <= cases) {
		int monsters;
		int max = 0;
		scanf("%d", &monsters);
		while (monsters-- != 0) {
			int speed;
			scanf("%d", &speed);
			if (speed > max)
				max = speed;
		}
		printf("Case %d: %d\n", actual, max);
		actual++;
	}

	return 0;
}



