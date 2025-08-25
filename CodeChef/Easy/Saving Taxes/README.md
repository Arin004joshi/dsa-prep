Saving Taxes

In Chefland, everyone who earns strictly more than 
𝑌
Y rupees per year, has to pay a tax to Chef. Chef has allowed a special scheme where you can invest any amount of money and claim exemption for it.

You have earned 
𝑋
X 
(
𝑋
>
𝑌
)
(X>Y) rupees this year. Find the minimum amount of money you have to invest so that you don't have to pay taxes this year.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of a single line of input consisting of two space separated integers 
𝑋
X and 
𝑌
Y denoting the amount you earned and the amount above which you will have to pay taxes.
Output Format

For each test case, output a single integer, denoting the minimum amount you need to invest.

Constraints
1
≤
𝑇
≤
100
1≤T≤100
1
≤
𝑌
<
𝑋
≤
100
1≤Y<X≤100
Sample 1:
Input
Output
4
4 2
8 7
5 1
2 1

2
1
4
1

Explanation:

Test case 
1
1: The amount above which you will have to pay taxes is 
2
2. Since you earn 
4
4 rupees, you need to invest at least 
2
2 rupees. After investing 
2
2 rupees, you will remain with an effective income 
4
−
2
=
2
4−2=2 rupees which will not be taxed.

Test case 
2
2: The amount above which you will have to pay taxes is 
7
7. Since you earn 
8
8 rupees, you need to invest at least 
1
1 rupees.

Test case 
3
3: The amount above which you will have to pay taxes is 
1
1. Since you earn 
5
5 rupees, you need to invest at least 
4
4 rupees.

Test case 
4
4: The amount above which you will have to pay taxes is 
1
1. Since you earn 
2
2 rupees, you need to invest at least 
1
1 rupees.