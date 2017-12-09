/* Date: 10/04/2017 </br>
Class: CS 4910</br>
Author: Cade Gillem & Bishop	</br></br>

*/
#include <stdio.h>
#include "cunit.h"
#include "Qsolve.h"
#include "validate.h"


int main(){
	float a, b, c;
	float x1, x2;
	int result;

	// initialize the unit testing framework
	cunit_init();

	//test Validate 1 good
	result = strValidate("1 2 3", &a, &b, &c);
	assert_eq("result", result, 0);
	assert_feq("a", a, 1.0);
	assert_feq("b", b, 2.0);
	assert_feq("c", c, 3.0);

	//test Validate 2 bad
	result = strValidate("a 2 3", &a, &b, &c);
	assert_eq("result", result, 0);
	assert_feq("a", a, 1.0);
	assert_feq("b", b, 2.0);
	assert_feq("c", c, 3.0);

	//test Validate 3 good
	result = strValidate("21 2 32", &a, &b, &c);
	assert_eq("result", result, 0);
	assert_feq("a", a, 21.0);
	assert_feq("b", b, 2.0);
	assert_feq("c", c, 32.0);

	//test Validate 4 bad
	result = strValidate("1 1e21 3", &a, &b, &c);
	assert_eq("result", result, 0);
	assert_feq("a", a, 1.0);
	assert_feqrerr("b", b, 1e21, 10.0*cunit_dmacheps);
	assert_feq("c", c, 3.0);

	//test Validate 5 good
	result = strValidate("1e45 2 3", &a, &b, &c);
	assert_eq("result", result, 0);
	assert_feqrerr("a", a, 1e45, 10.0*cunit_dmacheps);
	assert_feq("b", b, 2.0);
	assert_feq("c", c, 3.0);

	//test Qsolve 1 only one root
	a = 1.0;
	b = 2.0;
	c = 1.0;
	result = qsolve(a, b, c, &x1, &x2);
	assert_eq("result", result, 1);
	assert_feq("x1", x1,-1.0);
	assert_feq("x2", x2,-1.0);

	//test Qsolve 2 normal
	a = 1.0;
	b = 3.0;
	c = 2.0;
	result = qsolve(a, b, c, &x1, &x2);
	assert_eq("result", result, 0);
	assert_feq("x1", x1,-1.0);
	assert_feq("x2", x2,-2.0);

	//test Qsolve 3 normal
	a = 1.0;
	b = 1.0;
	c = -12.0;
	result = qsolve(a, b, c, &x1, &x2);
	assert_eq("result", result, 0);
	assert_feq("x1", x1,3.0);
	assert_feq("x2", x2,-4.0);

	//test Qsolve 4 normal
	a = 2.0;
	b = 5.0;
	c = 3.0;
	result = qsolve(a, b, c, &x1, &x2);
	assert_eq("result", result, 0);
	assert_feq("x1", x1,-1.0);
	assert_feq("x2", x2,-1.5);

	//test Qsolve 5 number too big
	a = INFINITY;
	b = 2.0;
	c = 3.0;
	result = qsolve(a, b, c, &x1, &x2);
	assert_eq("result", result, 4);
	assert_feq("x1", x1,-1.0);
	assert_feq("x2", x2,-1.5);

	//test Qsolve 6 not a quadratic
	a = 0.0;
	b = 1.0;
	c = 2.0;
	result = qsolve(a, b, c, &x1, &x2);
	assert_eq("result", result, 3);
	assert_feq("x1", x1,-1.0);
	assert_feq("x2", x2,-1.5);

	//test Qsolve 7 imaginary output
	a = 1.0;
	b = 0.0;
	c = 1.0;
	result = qsolve(a, b, c, &x1, &x2);
	assert_eq("result", result, 2);
	assert_feq("x1", x1,-1.0);
	assert_feq("x2", x2,-1.5);
}