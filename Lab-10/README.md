# Lab-10

## Question-01
Construct a hash table using an array and quadratic hashing. Complete insertion, search and deletion and print operations on the table.

Notes:

1: Observe that, the hash function would be r = x mod SIZE, where SIZE is the size of the hash table.

2: For deletion operation, just mark the position as empty, no need to shift elements.

3: Assume that insertion query is only called when the array as atleast one empty space. Similarly, search and delete queries are called for keys present in the array.

Input Format

The first line will contain two integers n and q denoting the size of the hash table and the number of queries respectively. Next q lines will follow queries in the following format:

1 x: Insert x into the hash table

2 x: Search x in the table, and print the number of probes required to find x

3 x: Delete x from the hash table

4: Print all the elements in the table, starting from the index 0 of the array. You should print the space separated elements in the hash table, and "NULL" when no element is present at an index.

Constraints

0 ≤ q ≤ 100
Subtask 1 Complete the queries 1 x and 4

Subtask 2 Complete the query 2 x

Subtask 3 Complete the query 3 x

Output Format

2 x: Search x in the table, and print the number of probes required to find x

4: Print all the elements in the table

Sample Input 0

7 8
1 76
1 40
1 48
1 5
1 55
4
3 5
4 
Sample Output 0

48 NULL 5 55 NULL 40 76
48 NULL NULL 55 NULL 40 76

## Question-02
Harold is a kidnapper who wrote a ransom note, but now he is worried it will be traced back to him through his handwriting. He found a magazine and wants to know if he can cut out whole words from it and use them to create an untraceable replica of his ransom note. The words in his note are case-sensitive and he must use only whole words available in the magazine. He cannot use substrings or concatenation to create the words he needs.

Given the words in the magazine and the words in the ransom note, print Yes if he can replicate his ransom note exactly using whole words from the magazine; otherwise, print No.

For example, the note is "Attack at dawn". The magazine contains only "attack at dawn". The magazine has all the right words, but there's a case mismatch. The answer is therefore No.

Function Description Complete the checkMagazine function in the editor below. It must print Yes if the note can be formed using the magazine, or No.

checkMagazine has the following parameters:

magazine: an array of strings, each a word in the magazine
note: an array of strings, each a word in the ransom note
Input Format

The first line contains two space-separated integers, m and n, the numbers of words in the magazine and the note. The second line contains m space-separated strings, each magazine[i]. The third line contains n space-separated strings, each note[i].

Constraints

1 ≤ m,n ≤ 30000
1 ≤ |magazine[i]|, |note[i]| ≤ 5
Each word consists of English alphanumeric letters (i.e., a to z and A to Z).
Output Format

Print Yes if he can use the magazine to create an untraceable replica of his ransom note. Otherwise, print No.

Sample Input 0

6 4
give me one grand today night
give one grand today
Sample Output 0

Yes
Sample Input 1

6 5
two times three is not four
two times two is four
Sample Output 1

No
Explanation 1

'two' occurs only once in the magazine.

Sample Input 2

7 4
Ive got a lovely bunch of coconuts
ive got coconuts
Sample Output 2

No
Explanation 2

Harold's magazine is missing the word ive.
