# Lab-01
In school days, we used to play a game called FLAMES (F: Friend, L: Love, A: Attraction, M: Marriage, E: Enemy, S: Sibling); which finds the relation between two names. Write a program that finds the relation between two names using the algorithm of FLAMES.

[Disclaimer: Examples or names in this problem statement are unintentional. Any resemblance in the real world is a mere coincidence.]

An example: Let’s check the relation between "abhishek" and "aishwarya". Remove the common characters from both the names. So, in the above problem the characters a, i, s and h are common. (Remember there are three a in second name. But only one a in first name and hence only once occurrence is common.) Now, the remaining number of characters in both the names is 4+5 = 9; which is the number of iterations required for eliminating a letter from FLAMES.

Now, you have to check the number 9 with FLAMES as explained below.

State 0: FLAMES

Run/Count through FLAMES with number 9 like,

F(1) L(2) A(3) M(4) E(5) S(6) F(7) L(8) A(9) M() E() S()

So, 9 ends at A. Now delete A from FLAMES. Hence, remaining letters are FLMES

State 1: FLMES

Now, you have to start from M, i.e, the last position you were at.

F() L() M(1) E(2) S(3) F(4) L(5) M(6) E(7) S(8) F(9) L() M() E() S()

Delete F from FLMES. Hence, remaining letters are LMES.

State 2: LMES - Starting point: L

L(1) M(2) E(3) S(4) L(5) M(6) E(7) S(8) L(9) M() E() S()

Delete L. Remaining MES.

State 3: MES - Starting point: M

M(1) E(2) S(3) M(4) E(5) S(6) M(7) E(8) S(9) M() E() S()

Delete S. Remaining ME.

State 4: ME - Starting point: M

M(1) E(2) M(3) E(4) M(5) E(6) M(7) E(8) M(9) E()

Delete M. Remaining E.

State 5: E

The remaining character E gives the relation between the two persons: (abhishek, aishwarya) : Enemies.

Function Prototypes:

// Function to shift characters of a string to left indices.
void shiftLeft(string& str, int pos);
Ex. If str contains "abcdefgh" and pos is 4. Then shiftLeft function deletes 'd' and modifies str to "abcefgh".

// Function to find the common characters between two strings.
int findSame(string str1, string str2);
Ex. If str1 is ”abcdab” and str2 is ”abxymnda”, findSame function finds the common characters 'a', 'b', 'd' and 'a' So the function returns integer 4.

// Function to remove characters from the string 'str' after repeated 'iter' iterations on str.
void solveFlames(string& str, int iter);
Ex. If str is "FLAMES" and iter is 5, the string remaining after removing characters is F. (FLAMES -> FLAMS -> FLAS -> FLA -> FA -> F)

Input Format

Format: Two strings (names of the two persons) separated by a space

Constraints

Note: 1. The input would be in lower case. 2. No two names will have all common characters.

Test Cases Set A:

None of the names will have repeating characters (e.g. RIA and RIAN)
Number of iterations required to remove a character in FLAMES is 1.
Test Cases Set B:

None of the names will have repeating characters
There are no constraints on number of iterations required to remove a character in FLAMES.
Test Cases Set C:

Names can have repeating characters (e.g. AISHWARYA and ABHISHEK)
There are no constraints on number of iterations required to remove a character in FLAMES.
Output Format

Format: [Length of Name1, Length of Name 2, Number of common characters, Relationship].

Sample Input 0

riya
riyan
Sample Output 0

[4,5,4,S]
Explanation 0

r,i,y,a are common in both the strings, so the strings remaining after removing common characters from "riya" and "riyan" are " " and "n" respectively. Therefore the number of iterations required to remove a character from "FLAMES" will be 0 + 1 = 1.

After 1st iteration f is removed, and lames is left.

After 2nd iteration l is removed, and ames is left.

After 3rd iteration a is removed, and mes is left.

After 4th iteration m is removed, and es is left.

After 5th iteration e is removed, and s is left. Remaining string: S

Since the length of "riya" is 4 and of "riyan" is 5, no. of common character is 4, hence the output is [4,5,4,S]
