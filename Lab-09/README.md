# Lab-09

## Question
2-3 Trees are self-balancing search trees. In this question, you have to write methods for a 2-3 tree.

Queries

1 x : Insert a node with key x into the tree.

2 : Print the number of times a node is split (middle node pushed to parent) and the number of times nodes are merged till now, in that order, as two space separated integers.

3 x : Delete the node with key x in the tree.

4 : Print the special traversel of the tree, which is basically an inorder traversal, but when visiting a leaf node, you are printing the sum of all the keys in the leaf.

Input Format

The first line contains an integer q, where q is the number of queries that will follow.

Each of the next q lines contains a query.

Constraints

q <= 100

Output Format

2 : Print the number of times a node is split (middle node pushed to parent) and the number of times nodes are merged till now, in that order, as two space separated integers.

4 : Print the special traversal of the tree.

Sample Input 0

7
1 42
1 20
1 51
1 68
1 9
1 15
4
Sample Output 0

9 15 20 42 119
Explanation 0

-Insert 42:

    42
-Insert 20:

    20, 42
-Insert 51:

        42

    |       |

    20      51
-Insert 9 and 68:

        42

    |       |

    9,20    51,68
-Insert 15:

        15, 42

    |     |     |

    9     20    51,68
Sample Input 1

7
1 42
1 20
1 51
1 68
1 9
1 15
2
Sample Output 1

2 0
Explanation 1

-Final tree:

        15, 42
    |     |     |
    9     20    51,68
Sample Input 2

9
1 42
1 20
1 51
1 68
1 9
1 15
3 9
2
4
Sample Output 2

2 1
35 42 119
Explanation 2

Final tree:

    42
  |     |
15,20   51,68
