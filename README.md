# c_eval_expr
A program that will evaluate a mathematical expression

**Warning** 
Code cannot currently handle negative number inputs eg.("-1" or "2 * -5")  Future updates will remedy this problem. 

Will evaluate a single mathematical expression.  Can currently not handle divide/modulo by 0 errors.  Can handle "+", "-", "\*", "/", and "%" operators.  Can handle any number of parentheses included in equation.
Uses a function similar to atoi() to parse the string to an integer value.
Treats operators in same order of precedence as C normally treats them.

##### Example:

Input:  "(9 + (5 * 6 - (9 % 3 - (22 / 11 + 5 * (80 - 40 * 3 * (5 + 11))))))"
Output: -9159
