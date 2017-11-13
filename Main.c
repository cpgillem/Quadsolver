#include <stdio.h>
#include "Qsolve.h"

int main() {
	double a, b, c;
	double x1, x2;

	printf("Enter a: \n");
	scanf("%lf", &a);

	printf("Enter b: \n");
	scanf("%lf", &b);

	printf("Enter c: \n");
	scanf("%lf", &c);

	qsolve(a, b, c, &x1, &x2);
	printf("Solution 1: %lf\n", x1);
	printf("Solution 2: %lf\n", x2);
}
