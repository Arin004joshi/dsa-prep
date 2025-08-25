Bitwise Tuples
Read problem statements in Vietnamese,

Bengali, Mandarin Chinese, and Russian as well.

Chef has two numbers 
𝑁
N and 
𝑀
M. Help Chef to find number of integer 
𝑁
N-tuples 
(
𝐴
1
,
𝐴
2
,
…
,
𝐴
𝑁
)
(A
1
	​

,A
2
	​

,…,A
N
	​

) such that 
0
≤
𝐴
1
,
𝐴
2
,
…
,
𝐴
𝑁
≤
2
𝑀
−
1
0≤A
1
	​

,A
2
	​

,…,A
N
	​

≤2
M
−1 and 
𝐴
1
&
𝐴
2
&
…
&
𝐴
𝑁
=
0
A
1
	​

&A
2
	​

&…&A
N
	​

=0, where 
&
& denotes the bitwise AND operator.

Since the number of tuples can be large, output it modulo 
10
9
+
7
10
9
+7.

Input
The first line contains a single integer 
𝑇
T denoting the number of test cases. The description of 
𝑇
T test cases follows.
The first and only line of each test case contains two integers 
𝑁
N and 
𝑀
M.
Output

For each test case, output in a single line the answer to the problem modulo 
10
9
+
7
10
9
+7.

Constraints
1
≤
𝑇
≤
10
5
1≤T≤10
5
1
≤
𝑁
,
𝑀
≤
10
6
1≤N,M≤10
6

###Subtasks Subtask #1 (100 points): original constraints

Sample 1:
Input
Output
4
1 2
2 2
4 2
8 4
1
9
225
228250597
Explanation:

Test Case 
1
1: The only possible tuple is 
(
0
)
(0).

Test Case 
2
2: The tuples are 
(
0
,
0
)
(0,0), 
(
0
,
1
)
(0,1), 
(
0
,
2
)
(0,2), 
(
0
,
3
)
(0,3), 
(
1
,
0
)
(1,0), 
(
2
,
0
)
(2,0), 
(
3
,
0
)
(3,0), 
(
1
,
2
)
(1,2), 
(
2
,
1
)
(2,1).