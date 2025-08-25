Plusle and Minun on Array

Chef has an array 
𝐴
A of length 
𝑁
N. He defines the alternating sum of the array as:

𝑆
=
∣
𝐴
1
∣
−
∣
𝐴
2
∣
+
∣
𝐴
3
∣
−
∣
𝐴
4
∣
+
…
(
−
1
)
𝑁
−
1
⋅
∣
𝐴
𝑁
∣
S=∣A
1
	​

∣−∣A
2
	​

∣+∣A
3
	​

∣−∣A
4
	​

∣+…(−1)
N−1
⋅∣A
N
	​

∣

Chef is allowed to perform the following operation on the array at most once:

Choose two indices 
𝑖
i and 
𝑗
j 
(
1
≤
𝑖
<
𝑗
≤
𝑁
)
(1≤i<j≤N) and swap the elements 
𝐴
𝑖
A
i
	​

 and 
𝐴
𝑗
A
j
	​

.

Find the maximum alternating sum Chef can achieve by performing the operation at most once.

Note: 
∣
𝑋
∣
∣X∣ denotes the absolute value of 
𝑋
X. For example, 
∣
−
4
∣
=
4
∣−4∣=4 and 
∣
7
∣
=
7
∣7∣=7.

Input Format
The first line will contain 
𝑇
T - the number of test cases. Then the test cases follow.
First line of each test case contains a single integer 
𝑁
N - size of the array 
𝐴
A.
Second line of each test case contains 
𝑁
N space separated integers - denoting the elements of array 
𝐴
A.
Output Format

For each testcase, output in a single line, the maximum alternating sum Chef can obtain by performing the operation at most once.

Constraints
1
≤
𝑇
≤
10
5
1≤T≤10
5
2
≤
𝑁
≤
10
5
2≤N≤10
5
−
10
9
≤
𝐴
𝑖
≤
10
9
−10
9
≤A
i
	​

≤10
9
Sum of 
𝑁
N over all test cases does not exceed 
2
⋅
10
5
2⋅10
5
.
Sample 1:
Input
Output
2
2
10 -10
7
-3 -2 -1 0 1 2 3

0
6

Explanation:

Test Case 
1
1: One optimal way is to perform no operations. Thus the alternating sum is 
∣
10
∣
−
∣
−
10
∣
=
10
−
10
=
0
∣10∣−∣−10∣=10−10=0.

Test Case 
2
2: One optimal way is to choose 
𝑖
=
2
i=2 and 
𝑗
=
5
j=5. After swapping, the array is 
[
−
3
,
1
,
−
1
,
0
,
−
2
,
2
,
3
]
[−3,1,−1,0,−2,2,3]. The alternating sum in this case is 
∣
−
3
∣
−
∣
1
∣
+
∣
−
1
∣
−
∣
0
∣
+
∣
−
2
∣
−
∣
2
∣
+
∣
3
∣
=
6
∣−3∣−∣1∣+∣−1∣−∣0∣+∣−2∣−∣2∣+∣3∣=6.