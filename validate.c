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
#include <math.h>
#include "MyLog.h"

int strValidate(char* in, float *a, float *b, float *c){
	char bad;
	if(sscanf(in, "%f %f %f%c", a, b, c, &bad) != 3){
		return -1;
	}
	return 0;
}

int validate(float a, float b, float c){
	//mylog("Called: qsolve, variables passed a = %lf, b = %fl, c = %fl", a, b, c);
	float disc = b * b - 4.0 * a * c; //=B^2 -4ac
	
	//validate arguments function log and return 4
	if (!isfinite(a) || !isfinite(b) || !isfinite(c)) {
		myLog("Inputs are either not numbers, or outside the valid range.");
		printf("Error 4 encountered. Check log file.\nInputs are either not numbers, or outside the valid range.\n");
		return 4;
	} else if (a == 0.0) { // quadratic checker
		myLog("Not a quadratic equation.");
		printf("Error 3 encountered. Check log file.\nNot a quadratic equation.\n");
		return 3;
	} else if (disc < 0.0) { 	//checks discriminant
		myLog("Imaginary number output.");
		printf("Error 2 encountered. Check log file.\nImaginary number output.\n");
		return 2;
	} else if (disc == 0.0) { //checks only one root
		myLog("Only one root.");
		printf("Error 1 encountered. Check log file.\nOnly one root.\n");
		return 1;
	}
	return 0;
}