/* Date: 10/04/2017 </br>
Class: CS 4910</br>
Author: Cade Gillem & Bishop	</br></br>

*/
#include <math.h>

int validate(float a, float b, float c){
	//mylog("Called: qsolve, variables passed a = %lf, b = %fl, c = %fl", a, b, c);
	float disc = b * b - 4.0 * a * c; //=B^2 -4ac
	
	//validate arguments function log and return 4
	if (!isfinite(a) || !isfinite(b) || !isfinite(c)) {
		return 4;
	} else if (a == 0.0) { // quadratic checker
		return 3;
	} else if (disc < 0.0) { 	//checks discriminant
		return 2;
	} else if (disc == 0.0) { //checks only one root
		return 1;
	}
	return 0;
}