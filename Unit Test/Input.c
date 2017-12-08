/* Date: 10/04/2017 </br>
Class: CS 4910</br>
Author: Cade Gillem & Bishop	</br></br>

*/
#include <stdio.h>

int main() {
	float a, b, c;
	char bad;
	do{
		// Receive input.
		printf("Enter a, b, and c, 0 for all to quit: \n");
		int checker = scanf("%f %f %f%c", &a, &b, &c, &bad);
		if(checker > 0) {
			printf("good input\n");
		} else {
			printf("bad input\n");
			while ( getchar() != '\n');
		}
	} while (a != 0 || b != 0 || c != 0);
	return 0;
}
