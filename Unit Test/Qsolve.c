/* Date: 10/04/2017 </br>
Class: CS 4910</br>
Author: Cade Gillem & Bishop	</br></br>

input double: 		a, b, c for equation</br>
Input/output double: 	x1, x2 for roots if avali</br>
return value:</br>
0 good vaules of x1 and x2</br>
1 single root
2 imaginary root
3  a = 0;
4  invalid input, including NAN, INF, -INF
How to turn logging off:
something
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "validate.h"

int main() {
	float a, b, c, x1, x2;
	char bad;
	do{
		scanf("%f %f %f%c", &a, &b, &c, &bad);
		float disc = b * b - 4.0 * a * c; //=B^2 -4ac

		int checker = validate(a, b, c);
		if (checker == 1 || checker == 0) {
			float rooted = sqrt(disc);
			x1 = (-b + rooted) / (2 * a);
			x2 = (-b - rooted) / (2 * a);
			printf("a = %f, b = %f, c = %f, X1 = %f, X2 = %f\n", a, b, c, x1, x2);
		} else {
			printf("Bad input\n");
		}
		
	}while(a != 0 || b != 0 || c != 0);
	return 0;
}
