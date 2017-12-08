/* Date: 10/04/2017 </br>
Class: CS 4910</br>
Author: Cade Gillem & Bishop	</br></br>

*/
#include <stdio.h>
#include "Qsolve.h"
#include "validate.h"

int main() {
	float a, b, c;
	float x1, x2;
	int result;

	printf("********************************************************\n");
	printf("Quadsolver Version 2.0 created by Bishop and Cade Gillem\n");
	printf("********************************************************\n");

	do{
		// Receive input.
		printf("Enter a, b, and c, or 0 for all to quit: \n");
		while (strValidate(&a, &b, &c) != 0){
			printf("Bad input, input only float numbers\n");
		}
		if((a != 0 || b != 0 || c != 0)) {
			// Calculate the roots of the quadratic equation.
			result = qsolve(a, b, c, &x1, &x2);

			// Only print the solution if there was no error.
			if (result == 0 || result == 1) {
				printf("Solution 1: %f\n", x1);
				printf("Solution 2: %f\n", x2);
			} 
		 } 
	} while (a != 0 || b != 0 || c != 0);
	return 0;
}
