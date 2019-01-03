# Lab-02

## Question
Alexa has two queues of non-negative integers, queue A = {a0, a1, ..., an-1} and queue B = {b0, b1, ..., bm-1} where index 0 denotes the front of the queue. Alexa challenges Nick to play the following game:

In each move, Nick can remove one integer from the front of either queue A or queue B.
Nick keeps a running sum of the integers he removes from the two queues.
Nick is disqualified from the game if, at any point, his running sum becomes greater than some integer x given at the beginning of the game.
Nick's final score is the total number of integers he has removed from the two queues.
Given A, B, and x for g games, find the maximum possible score Nick can achieve (i.e., the maximum number of integers he can remove without being disqualified) during each game and print it on a new line.

Input Format

The first line contains an integer, g (the number of games). The 3*g subsequent lines describe each game in the following format:

The first line contains three space-separated integers describing the respective values of n (the number of integers in queue A ), m (the number of integers in queue B ), and x (the number that the sum of the integers removed from the two queues cannot exceed).
The second line contains n space-separated integers describing the respective values of a0, a1, ..., an-1.
The third line contains m space-separated integers describing the respective values of b0, b1, ..., bm-1.
Constraints

1 ≤ g ≤ 50
1 ≤ n, m ≤ 105
1 ≤ ai, bj ≤ 106
1 ≤ x ≤ 109
Subtasks

1 ≤ n, m ≤ 100 for 50% of the maximum score
Output Format

For each of the games, print an integer on a new line denoting the maximum possible score Nick can achieve without being disqualified.

Sample Input 0

1
5 4 10
4 2 4 6 1
2 1 8 5
Sample Output 0

4
Explanation 0

The two queues look like this:

A -> | 4 | 2 | 4 | 6 | 1 |

B -> | 2 | 1 | 8 | 5 |

The integers in bold are the integers that Nick should remove. We print 4 as our answer, because that is the maximum number of integers that can be removed from the two queues without the sum exceeding x = 10.

