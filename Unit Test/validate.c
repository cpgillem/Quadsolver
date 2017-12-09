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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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