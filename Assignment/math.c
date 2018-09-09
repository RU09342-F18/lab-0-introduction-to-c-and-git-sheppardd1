/*
	David Sheppard
	Created: 8 September 2018
	Last Modified: 9 September 2018
	Purpose: defines a math funciton with 2 inputs that can handle the following operations:
		+, -, *, /, Shift Left, Shift Right, AND, OR , XOR, Invert
*/

#include <assert.h>


int divide(int, int);
int modulus(int, int);



int math(int num1, int num2, char Operator)
{
	switch( Operator )   
	{  
		case '+':	//addition
			return num1 + num2;
		case '-':	//subtraction
			return num1 - num2;
		case '*':	//multiplication
			return num1 * num2;
		case '/':	//integer division
			return divide(num1, num2);
		case '%':	//remainder of division (modulus)
			return modulus(num1, num2);
		case '<':	//shift left: shifts binary version of num1 left num2 times (mult. by 2)
			return num1 * (2 * num2);
		case '>':	//shift left: shifts binary version of num1 right num2 times (divide by 2)
			return num1 / (2 * num2);
		case '&':	//bitwise AND
			return num1 & num2;
		case '|':	//bitwise OR
			return num1 | num2;	
		case '^':	//bitwise XOR
			return num1 ^ num2;
		case '~':	//invert: inverts num1 (num2 does nothing)
			return ~num1;
		    
	}	
	
}

int divide(int x, int y){

//Uncomment the following line to stop the program if trying to divide by 0 (instead of returning 0):
//	assert(y != 0);

	//check for division by 0
	//if true, return 0
	if(y == 0)	
		return 0;

	//else return x/y:
	return x / y;
};

int modulus(int x, int y){

//Uncomment the following line to stop the program if trying to divide by 0 (instead of returning 0):
//	assert(y != 0);

	//check for division by 0
	//if true, return 0
	if(y==0)	
		return 0;

	//else return x%y:
	return x % y;
};
