#Math Function
Created by: David Sheppard
Created: 8 September 2018
Last Modified: 9 September 2018 (addressed division by 0)
Purpose: defines a math funciton with 2 integer inputs that can handle the operations listed below.
Function Prototype: int math(int num1, int num2, char operation);
Use: The function returns an integer result of an operation performed on two integer inputs (num1 and num2). The operation is specified as a char (see below for a list of operations).
##Conventional Operations:
Add: +
Subtract: -
Multiply: *
Divide (integer division): /
Modulus: %
##Biwise Operations (done with the binary form of the integer):
Shift Left: <
Shift Right: >
AND: &
OR: |
XOR: ^
Invert: ~
Note: the invert function only returns the inverted form of the first number (num1). A second number (num2) must still be given, but is not used.
##Limitations:
1. If division by 0 is attempted, the function returns 0. Lines 51 and 65 can be uncommented to stop the program when dividing by 0 instead of returning 0, if that is desired.
2. Only integers are valid inputs.
3. All inputs must be in base 10, not binary (even when doing bitwise operations).
