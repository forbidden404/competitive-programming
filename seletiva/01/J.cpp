#include <bits/stdc++.h>
#define BUFFER 256

using namespace std;

int main()
{
	int cases;
	scanf("%d", &cases);
	int turn = 1;

	while (turn <= cases) {
		double input;
		double output;
		char op[3];
		scanf("%lf %s", &input, op);
		if (strcmp(op, "kg") == 0) {
			output = input * 2.2046;	
			strcpy(op, "lb");
		} else if (strcmp(op, "l") == 0) {
			output = input * 0.2642;
			strcpy(op,"g");
		} else if (strcmp(op, "lb") == 0) {
			output = input * 0.4536;
			strcpy(op,"kg");
		} else {
			output = input * 3.7854;
			strcpy(op, "l");
		}
		printf("%d %.4lf %s\n", turn, output, op); 
		turn++;
	}

	return 0;
}




