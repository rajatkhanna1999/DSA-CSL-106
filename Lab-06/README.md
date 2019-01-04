# Lab-06

## Question
My computer, Mac, really hates everytime I write an infix expression. You have to ease the task for Mac by transforming a given Infix expression to Postfix.

Instead of numeric variables the expression given is using lowercase english letters (a to z). The priority of operators is as follows '+', '-', '', '/', '^' (increasing left to right) '^' is for exponentiation, where '+', '-', '', and '/' have left associativity and '^' has right associativity.

Each case would be a string without space in valid form, i.e., containing only variables (a-z), operators ('+', '-', '', '/', '^') and parenthesis ( '(', ')' ).

Input Format

First line containing a number T, number of test cases. Then T lines with test cases in form of strings (say S).

Constraints

1 ≤ T ≤ 1000
1 ≤ length of S ≤ 1000
Subtask 1 There won't be any case with ambiguity i.e., such that two different answers are posible e.g., (a+b+c), it would be well parenthesised in that case.

Subtask 2 Original constraints applicable. Use appropritae precedence and associativity orders.

Output Format

For each expression of T given test cases print the output postfix form in new line.

Sample Input 0

4
(a+b)
(a+b*c)
(r+(s+t))
((r+s)+t)
Sample Output 0

ab+
abc*+
rst++
rs+t+
