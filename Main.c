#include <stdio.h>
#include "Qsolve.h"

int main() {
	double a, b, c;
	double x1, x2;
	int result;

	// Receive input.
	printf("Enter a: \n");
	scanf("%lf", &a);

	printf("Enter b: \n");
	scanf("%lf", &b);

	printf("Enter c: \n");
	scanf("%lf", &c);

	// Calculate the roots of the quadratic equation.
	result = qsolve(a, b, c, &x1, &x2);

	// Only print the solution if there was no error.
	if (result == 0) {
		printf("Solution 1: %lf\n", x1);
		printf("Solution 2: %lf\n", x2);
	} else {
		printf("Error %d encountered. Check log file.\n", result);
	}
}
