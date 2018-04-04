# c_eval_expr
A program that will evaluate a mathematical expression.

**04/04/2018** 
Added functionality that should handle negative numbers eg.("-1" or "2 * -5"). 

The program evaluates a single mathematical expression. Except for divide/modulo by 0 errors, it can currently handle "+", "-", "\*", "/" and "%" operators, and any number of parentheses included in equation. This program uses a function similar to atoi() to parse the string to an integer value. It treats operators in the same order of precedence as C normally treats them.

##### Example:

Input:  "(9 + (5 * 6 - (9 % 3 - (22 / 11 + 5 * (80 - 40 * 3 * (5 + 11))))))"

Output: -9159

Input: "- 1 * 1 - (- 1 + 3 * (4 - -5))"

Output: -27
