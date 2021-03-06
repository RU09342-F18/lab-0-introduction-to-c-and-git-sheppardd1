/*
	David Sheppard
	Created: 8 September 2018
	Last Modified: 10 September 2018 (updated naming schemes for some variables)
	Purpose: defines a math funciton with 2 inputs that can handle the following operations:
		+, -, *, /, Shift Left, Shift Right, AND, OR , XOR, Invert

	Note: Dividing by 0 is not allowed; num2 cannot be set to 0 when using '/' or '%', else program will terminate.
*/

#include <assert.h>


int divide(int, int); //prototype for division function
int modulus(int, int);//prototype for modulus function



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
		case '/':	//integer division. Dividing by 0 will end the program.
			return divide(num1, num2);
		case '%':	//remainder of division (modulus). Dividing by 0 will end the program.
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

//Divide function:
//Inputs: 2 ints - numerator and denominator
//Outputs: answer of division between 1st and 2nd input (as a int)
//Throws an assertion if denominator is 0
int divide(int numerator, int denominator){

	//check for division by 0
	assert(denominator != 0);

//Uncomment the following 2 lines to return 0 when trying to divide by 0 (instead of stopping the program):
//	if(y == 0)	
//		return 0;

	//else return x/y:
	return numerator / denominator;
};


//Modulus function:
//Inputs: 2 ints - numerator and denominator
//Outputs: answer is the remainder of division between 1st and 2nd input (as a int)
//Throws an assertion if denominator is 0
int modulus(int numerator, int denominator){

	//check for division by 0
	assert(denominator != 0);

//Uncomment the following 2 lines to return 0 when trying to divide by 0 (instead of stopping the program):
//	if(y==0)	
//		return 0;

	//else return x%y:
	return numerator % denominator;
};
