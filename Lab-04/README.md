# Lab-02

## Question-1

A queue is an abstract data type that maintains the order in which elements were added to it, allowing the oldest elements to be removed from the front and new elements to be added to the rear. This is called a First-In-First-Out (FIFO) data structure because the first element added to the queue (i.e., the one that has been waiting the longest) is always the first one to be removed.

A basic queue has the following operations:

Enqueue: add a new element to the end of the queue.
Dequeue: remove the element from the front of the queue and return it.
In this challenge, you must first implement a queue using two stacks. Then process  queries, where each query is one of the following  types:

1 x: Enqueue element  into the end of the queue.
2: Dequeue the element at the front of the queue.
3: Print the element at the front of the queue.
Input Format

The first line contains a single integer, , denoting the number of queries. 
Each line  of the  subsequent lines contains a single query in the form described in the problem statement above. All three queries start with an integer denoting the query , but only query  is followed by an additional space-separated value, , denoting the value to be enqueued.

Constraints

It is guaranteed that a valid answer always exists for each query of type .
Output Format

For each query of type , print the value of the element at the front of the queue on a new line.

Sample Input

10
1 42
2
1 14
3
1 28
3
1 60
1 78
2
2
Sample Output

14
14
Explanation

We perform the following sequence of actions:

Enqueue 42;queue={42} .
Dequeue the value at the head of the queue,42 ;queue= {}.
Enqueue 14;queue={14} .
Print the value at the head of the queue,14 ;queue={14} .
Enqueue 28;queue={24,28}.
Print the value at the head of the queue,14;queue={14,28} .
Enqueue 60;queue={14,28,60} .
Enqueue 78;queue={14,28,60,78}.
Dequeue the value at the head of the queue,14 ;queue={28,60,78} .
Dequeue the value at the head of the queue,28 ;queue={60,78} 

## Question-2

A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].

Two brackets are considered to be a matched pair if the an opening bracket i.e., (, [, or { occurs to the left of a closing bracket i.e., ), ], or } of the exact same type. There are three types of matched pairs of brackets: [], {}, and ().

A matching pair of brackets is not symmetric if the set of brackets it encloses are not matched. For example, {[(])} is not symmetric because the contents in between { and } are not symmetric. The pair of square brackets encloses a single, unsymmetric opening bracket, (, and the pair of parentheses encloses a single, unsymmetric closing square bracket, ].

By this logic, we say a sequence of brackets is considered to be symmetric if the following conditions are met:

• It contains no unmatched brackets.

• The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.

• Given strings of brackets, determine whether each sequence of brackets is symmetric. If a string is symmetric, print YES on a new line; otherwise, print NO on a new line.

Input Format

The first line contains a single integer n, denoting the number of strings. Each line of the subsequent lines consists of a single string,s, denoting a sequence of brackets.

Constraints

1 ≤ n ≤ 10^3 1 ≤ length(s) ≤ 10^3

Output Format

For each string of brackets, print YES or NO on a new line.

Sample Input 0

3
{[()]}
{[(})}
{{[[(())]]}}
Sample Output 0

YES
NO
YES
