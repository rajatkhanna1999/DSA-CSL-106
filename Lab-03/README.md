# Lab-02

## Question-1
You’re given the pointer to the head nodes of two sorted linked lists. The data in both lists will be sorted in ascending order. Change the next pointers to obtain a single, merged linked list which also has data in ascending order. Either head pointer given may be null meaning that the corresponding list is empty.

Input Format

You have to complete the SinglyLinkedListNode MergeLists(SinglyLinkedListNode headA, SinglyLinkedListNode headB) method which takes two arguments - the heads of the two sorted linked lists to merge. You should NOT read any input from stdin/console.

The input is handled by the code in the editor and the format is as follows:

The first line contains an integer , denoting the number of test cases. 
The format for each test case is as follows:

The first line contains an integer , denoting the length of the first linked list. 
The next  lines contain an integer each, denoting the elements of the linked list. 
The next line contains an integer , denoting the length of the second linked list. 
The next  lines contain an integer each, denoting the elements of the second linked list.

Constraints

, where  is the  element of the list.
Output Format

Change the next pointer of individual nodes so that nodes from both lists are merged into a single list. Then return the head of this merged list. Do NOT print anything to stdout/console.

The output is handled by the editor and the format is as follows:

For each test case, print in a new line, the linked list after merging them separated by spaces.

Sample Input

1
3
1
2
3
2
3
4
Sample Output

1 2 3 3 4 
Explanation

The first linked list is: 1 -> 2 -> 3 -> NULL

The second linked list is: 3 -> 4 -> NULL

Hence, the merged linked list is: 1 -> 2 -> 3 -> 3 -> 4 -> NULL

## Question-2
There are two singly linked lists in a system. By some programming error, the end node of one of the linked list might have gotten linked to the second list, forming an inverted Y shaped list. Write a program to get the point where two linked list merge.

Note: In case of no point of intersection print "NULL" in your answer in the place of the point of intersection.

Input Format

The input is handled by the code in the editor and the format is as follows:

The first line contains two integers denoting the number of elements in the following lines. The next lines contain an integer each, denoting the elements of the first linked list. The next lines contain an integer each, denoting the elements of the second linked list.

Constraints

No constraints

Output Format

Print number of nodes in bigger list, number of nodes in smaller list, point of intersection

Sample Input 0

5 3
3 6 9 15 30
10 15 30
Sample Output 0

5,1,15
Explanation 0

Explanation

The first linked list is: 3 -> 6 -> 9 -> 15 -> 30 -> NULL

The second linked list is: 10 -> 15 -> 30 -> NULL

Hence, the second linked list is actually 10 -> NULL and the two linked list have 15 as the intersection point.
