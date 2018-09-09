# Math Function
**Created by:** David Sheppard  
**Date:** 8 September 2018  
**Last Modified:** 9 September 2018 (addressed division by 0 and added README)  
**Purpose:** defines a math funciton with 2 integer inputs that can handle the operations listed below.  
**Function Prototype:** int math(int num1, int num2, char operation);  
**Use:** The function returns an integer result of an operation performed on two integer inputs (num1 and num2). The operation is specified as a char (see below for a list of operations).  
## Conventional Operations:
* Add: +
* Subtract: -
* Multiply: *
* Divide (integer division): /
* Modulus: %
## Biwise Operations:
Bitwise operations are done with the binary form of the integer, even though the inputs and outputs of the function must be in base 10.
* Shift Left: <
* Shift Right: >
* AND: &
* OR: |
* XOR: ^
* Invert: ~  
Note: the invert function only returns the inverted form of the first number (num1). A second number (num2) must still be given even though it is not used.
## Limitations:
1. If division by 0 ('/' or '%') is attempted, the program ends (via an assertion). If desired, lines 56, 57, 68, and 69 can be uncommented and lines 53 and 66 can be commented to cause the function to return 0 when dividing by 0 instead of ending the program.
2. The first two inputs must be ints and the last input must be a char ---> math(int, int, char)
3. The two int inputs must be in base 10, not binary (even when doing bitwise operations).
4. All outputs are in base 10.
## Valid Inputs/Outputs:
* When using Division or Modulus: 0 is not a valid input for num2 (the 2nd int).
* Otherwise: all real integer numbers are valid inputs and outputs, within the linits of the machine (i.e. each machine has limits to the maximum and minimum size of integers).
## Dependencies:
The math.c file uses the <assert.h> library to catch division by 0.
