#include <stdio.h>
#include <math.h>


int add(int x[], int y[]) {
	int output = 0;
	for (int i = 3; i >= 0; i--) {
		int t = pow(10, i);
		int sum = x[3 - i] + y[3 - i];

		output += sum * t;
		printf("%d %d %d\n", output, sum, t);
	}
	return output;
}


int main()
{
	int x[] = { 1,2,3,4 };
	int y[] = { 5,6,7,8 };

	int sum = add(x, y);
	printf("%d%d%d%d + %d%d%d%d = %d", x[0], x[1], x[2], x[3], y[0], y[1], y[2], y[3], sum);
}

