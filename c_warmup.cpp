#include <stdio.h>
#include <math.h>


int add(int x[], int y[]) {
	int output = 0;
	for (int i = 3; i >= 0; i--) {
		int t = pow(10, i);
		int sum = x[3 - i] + y[3 - i];

		output += sum * t;
	}
	return output;
}



bool single_prime(int n) {
	short divisors = 0;
	for (double j = 1; j <= n / 2 ; j++) {
		double q = n / j;

		if (q - (int)q == 0) {
			divisors++;
		}
	}

	if (divisors > 1) {
		return false;
	}
	else {
		return true;
	}
}


void prime(double limit) {
	for (int i = 1; i <= limit; i++) {
		if (single_prime(i)) {
			printf("Prime: %d\n",i);
		}
	}
}




long long faculty(int in) {
	if (in == 1) {
		return 1;
	}
	else {
		return in * faculty(in-1);
	}
}




int main()
{
	int x[] = { 1,2,3,4 };
	int y[] = { 5,6,7,8 };

	int sum = add(x, y);
	printf("%d%d%d%d + %d%d%d%d = %d\n", x[0], x[1], x[2], x[3], y[0], y[1], y[2], y[3], sum);


	int limit = 100;
	prime(limit);


	int n = 4;
	printf("%d\n", faculty(n));
}

