#include <stdio.h>
#include <math.h>

#include <chrono>
using namespace std::chrono;


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
	int counter = 0;
	for (int i = 2; i <= limit; i++) {
		if (single_prime(i)) {
			counter++;
		}
	}
	printf("# of prime numbers under %d: %d\n", (int)limit, counter);
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


	auto start = high_resolution_clock::now();

	int limit = 100;
	prime(limit);

	auto end = high_resolution_clock::now();
	auto runtime = duration_cast<microseconds>(end - start);
	printf("Found in %d microseconds\n\n", runtime);


	int i = 0;
	int prime_counter = 0;
	start  = high_resolution_clock::now();
	auto curr = runtime;

	while (true) {
		if (single_prime(i)) {
			prime_counter++;
		}

		curr = duration_cast<microseconds>(high_resolution_clock::now() - start);
		if (curr.count() > 1000000) {
			break;
		}
		i++;
	}
	printf("%d prime numbers have been found in one second\n", prime_counter);
	


	int n = 4;
	printf("\n\n%d! = %d\n", n, (int)faculty(n));
}

