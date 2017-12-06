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

#include "Qsolve.h"

int qsolve(double a, double b, double c, double* x1, double* x2) {
	//mylog(�gCalled: qsolve, variables passed a = %lf, b = %fl, c = %fl�h, a, b, c);
	double disc = b * b - 4.0 * a * c; //=B^2 -4ac

	//validate arguments function log and return 4
	if (!isfinite(a) || !isfinite(b) || !isfinite(c)) {
		myLog("Inputs are either not numbers, or outside the valid range.");
		return 4;
	}

	// quadratic checker
	if (a == 0.0) {
		myLog("Not a quadratic equation.");
		return 3;
	}

	//checks discriminant
	if (disc < 0.0) {
		myLog("Imaginary number output.");
		return 2;
	} else if (disc == 0.0) {
		myLog("Only one root.");
		return 1;
	}

	double rooted = sqrt(disc);
	*x1 = (-b + rooted) / (2 * a);
	*x2 = (-b - rooted) / (2 * a);

	return 0;
}
