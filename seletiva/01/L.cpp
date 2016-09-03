#include <bits/stdc++.h>

using namespace std;

int main()
{
	long input;
	while (1) {
		scanf("%ld", &input);
		if (input == 0)
			return 0;
		long rest = 0;
		long output = 0;
		while (input > 9) {
			while (input != 0) {
				rest = input % 10;	
				output += rest;
				input /= 10;
			}
			input = output;
			output = 0;
			rest = 0;
		}
		printf("%ld\n", input);
	}
	return 0;
}
