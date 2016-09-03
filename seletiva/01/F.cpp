#include <bits/stdc++.h>
#define BUFFER 256

using namespace std;

int main()
{
	int cases;
	scanf("%d", &cases);

	while (cases-- > 0) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		int output = 0;
		output = b;
		int i = 1;
		while (a-- > 1)
			output += (b + (c * i++));
		printf("%d\n", output);
	}

	return 0;
}



