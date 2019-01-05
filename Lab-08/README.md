# Lab-08

## Question
AVL Trees are balanced binary search trees, which satisfy the AVL invariant property that for every node in the tree, hL-hR <= 1 = balance factor, where hL and hR are the node's left and right children respectively. In this question, you have to write methods for an AVL(k)tree, i.e., an AVL tree with balance factor k. For example, an AVL2 tree ensures that the invariant |hL-hR| <= 2 is satisfed for every node of the tree. Here is an example of an AVL2 tree in which the numbers 10, 20, 30, 40, 50, 25, 60 are inserted:

image

Rotations

image Queries

1 x : Insert a node with key x into the tree.

2 : Print the number of left rotations and number of right rotations performed till now, in that order, as two space separated integers.

3 x : Search for the node with key x in the tree and print the number of times you choose to move along a left edge, and the number of times you move along a right edge, in that order, as two space separated integers (#left choices, #right choices). If x is not present in the tree, print `-1 ,- 1'.

4 x : Delete the node with key x in the tree.

5 : Print the inorder traversel of the tree.

Input Format

The first line contains the balance factor, k.

The second line contains an integer q, where q is the number of queries that will follow.

Each of the next q lines contains a query.

Constraints

1 <=k <= 5

q <= 10

Output Format

2 : Print the number of left rotations and number of right rotations performed till now, in that order, as two space separated integers.

3 x : Search for the node with key x in the tree and print the number of times you choose to move along a left edge, and the number of times you move along a right edge, in that order, as two space separated integers (#left choices, #right choices). If x is not present in the tree, print `-1,- 1'.

5: Print the inorder traversal of the tree

Sample Input 0

1
12
1 10
1 20
2
1 30
2
1 40
1 50
1 25
2
3 10
3 50
3 25
Sample Output 0

0 0
1 0
3 1
2 0
0 2
1 1
