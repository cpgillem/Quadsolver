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

int main(){
	float a, b, c;
	char bad;
	do{
		// Receive input.
		scanf("%f %f %f%c", &a, &b, &c, &bad);
		//mylog("Called: qsolve, variables passed a = %lf, b = %fl, c = %fl", a, b, c);
		float disc = b * b - 4.0 * a * c; //=B^2 -4ac
	
		//validate arguments function log and return 4
		if (!isfinite(a) || !isfinite(b) || !isfinite(c)) {
			printf("Inputs are either not numbers, or outside the valid range.\n");
		} else if (a == 0.0) { // quadratic checker
			printf("Not a quadratic equation.\n");
		} else if (disc < 0.0) { 	//checks discriminant
			printf("Imaginary number output.\n");
		} else if (disc == 0.0) { //checks only one root
			printf("Only one root.\n");
		} else {
			printf("Good input.\n");
		}
	} while (a != 0 || b != 0 || c != 0);
	return 0;
}