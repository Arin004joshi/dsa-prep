50. Pow(x, n)SolvedMediumTopicsCompaniesImplement pow(x, n), which calculates x raised to the power n (i.e., xn).

 
Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000


Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100


Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25


 
Constraints:


	-100.0 < x < 100.0
	-231 <= n <= 231-1
	n is an integer.
	Either x is not zero or n > 0.
	-104 <= xn <= 104

 Seen this question in a real interview before?1/5YesNoAccepted2,366,908/6.3MAcceptance Rate37.4%TopicsMathRecursionCompaniesSimilar QuestionsSqrt(x)EasySuper PowMediumCount Collisions of Monkeys on a PolygonMediumDiscussion (499)Choose a typeComment💡 Discussion Rules1. Please don't post any solutions in this discussion.2. The problem discussion is for asking questions about the problem or for sharing tips - anything except for solutions.3. If you'd like to share your solution for feedback and ideas, please head to the solutions tab and post it there.Sort by:BestTyler MatchettFeb 16, 2023Here is a test case made by someone who was in a bad mood
x=-1
n=2147483647 Read moreTip59113mrkanesirFeb 18, 2023how am i supposed to NOT get stack overflow with n=2147483647 ... Read more35719Soumyajit Dey SarkarJul 24, 2023return pow(x,n);
Beats 100% of the Solution :)
I have successfully unlocked my clown outfit. Read more4249Linearly IndependentApr 07, 2022return x**n Read more45326SylvexMar 18, 2023x =
2.00000
n =
-2147483648
What even is the point of this edge case??? Read more18825olooneyJul 06, 2018This is the 37th problem I've solved on the site and in the end I got a respectible 4ms solution. But honestly, It seems like its 2% algorithm, 98% fiddling with binary representations of signed integers and floating point numbers. I also note that, as of this writing, the problem has 1160 downvotes to 428 upvotes, so there's certainly some shared negativity out there.
Personally, I didn't enjoy this problem because I felt like I spent more time writing custom test cases for corner cases than I did programming. Frankly I cannot imagine getting this question in an interview and having the interviewer go, "aha! but your solution doesn't account for the case when n is -2^31 and x is exactly -1.0! There's no way we'd hire such an incompetent programmer!" And yet the way the acceptance tests are written, you need to nail every single corner case. Perhaps that frustration is limited to C/C++? Or there's a different algorithm that more naturally accounts for these edge cases?
What was your experience? Would you agree or disagree with my thesis that this is the worst problem on the site? Read more27411Rishabh MishraJul 24, 2023Someone just hates society
n = INT_MIN & x = 1.0000000000001 wtf !! Read more831shadowfax_Jan 31, 2022just has the onsite and the interviewer tdidn't want the recursive version but wanted the fast one with no recursion. Read more725natitatiApr 15, 2023Is there something broken about testcase 305? Read more424HitroMar 19, 2019I'm wondering why you guys are not using builtin Math.pow() method??
Please give me some insight.
Thank you :) Read more618123450Copyright © 2025 LeetCode. All rights reserved.