# Lab-10

## Question-01
Given a directed graph with n nodes numbered 0 to n-1, and m edges, print the vertices visited while performing a BFS.

Input Format

First line contains two space separated integers, n and m.

The m consecutive lines contains two space separated integers u and v, denoting an edge between vertex u and vertex v.

The last line contains a single integer s denoting the source vertex.

Constraints

No Constraints

Output Format

Print space separated integers denoting the vertices visited while performing a BFS.

Sample Input 0

4 6
0 1
0 2
1 2
2 0
2 3
3 3
2
Sample Output 0

2 0 3 1
Explanation 0

image

Step 1: Starting from 2, you'll reach 0 and 3

Step 2: From 0 you'll reach 1 and 2

Step 3: From 3 you'll reach 3 again because of the self loop

Step 4: From 1, you'll 2

So the order of vertices visited while performing a BFS is 2 0 3 1

## Question-02
Given a directed graph with n nodes numbered 0 to n-1, and m weighted edges, print the vertices visited while performing a DFS, along with the wieght of the edge traversed.

Note: For the source vertex, print -1 as the weight of the edge traversed.

Input Format

First line contains two space separated integers, n and m.

The m consecutive lines contains three space separated integers u, v and w, denoting an edge between vertex u and vertex v with weight w.

The last line contains a single integer s denoting the source vertex.

Constraints

No Constraints

Output Format

Print two space separated integers in each line denoting the vertices visited while performing a DFS and the wieght of the edge traversed respectively.

Sample Input 0

4 6
0 1 1
0 2 2
1 2 3
2 0 4
2 3 5
3 3 6
2
Sample Output 0

2 -1
0 4
1 1
3 5
Explanation 0

image
