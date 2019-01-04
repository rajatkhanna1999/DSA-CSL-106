# Lab-07

## Question
Given a binary search tree, consisting of n keys, you have to process q queries.
In each query, given two keys that exist in the tree, print the maximum path sum between two nodes with those keys.
Path sum for two nodes is defined as the sum of the keys of all nodes in the unique path between two nodes.
Note that input and output format have already been taken care of in the code.

Input Format

The first line of input contains one integer n, the number of keys in the binary search tree.
The next line contains n spaced unique integers, which are the keys of the binary search tree.
The next line contains one integer q, the number of queries to be processed.
The next q lines contain two integers, which are keys that exist in the binary search tree.
Constraints

1 ≤ n ≤ 2 * 103
1 ≤ q ≤ 2 * 103
1 ≤ key ≤ 2 * 104
Subtask 1: All keys in the tree are unique

Output Format

Print one line per query, the path sum for the given two nodes, as described above. Do not print anything else.
Sample Input 0

6
4 2 3 1 7 6
1
1 7
Sample Output 0

14
Explanation 0

image

Since the unique path from 1 to 7 is 1 -> 2 -> 4 -> 7, therefore the pathsum becomes 1 + 2 + 4 + 7 = 14
