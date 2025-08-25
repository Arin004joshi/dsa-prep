40. Combination Sum IISolvedMediumTopicsCompaniesGiven a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 
Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]


Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]


 
Constraints:


	1 <= candidates.length <= 100
	1 <= candidates[i] <= 50
	1 <= target <= 30

 Seen this question in a real interview before?1/5YesNoAccepted1,477,286/2.5MAcceptance Rate58.1%TopicsArrayBacktrackingCompaniesSimilar QuestionsCombination SumMediumDiscussion (191)Choose a typeComment💡 Discussion Rules1. Please don't post any solutions in this discussion.2. The problem discussion is for asking questions about the problem or for sharing tips - anything except for solutions.3. If you'd like to share your solution for feedback and ideas, please head to the solutions tab and post it there.Sort by:Bestananta_srivastavaJan 17, 2023where in the question is it mentioned that th ans should be in sorted order? Read more28710Nachiketa BhoraniyaMar 07, 2023to check the code optimization, below test case might be helpful which is not included in list of test cases for this problem and was taking more time to solve when I provided custom test cases. here it is
candidates = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,33,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,44,4,4,4,5,5,5,5,5,5,5,5,5,5,5,49,5,5,5,5,6,6,6,6]
target = 29 Read more86PurdueKumarNov 02, 2018This problem is the same problem as the subset sum problem, which is a famous np-complete problem. The only solution is the brute force solution. Read more881Aditya KumarAug 13, 2024TESTCASES------------>
[10,1,2,7,6,1,5]
8
[2,5,2,1,2]
5
[2, 2, 2, 2, 3, 6, 7]
9
[1, 2, 2, 3, 3, 4, 5, 6, 7, 8, 9, 10]
 25
[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,33,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,44,4,4,4,5,5,5,5,5,5,5,5,5,5,5,49,5,5,5,5,6,6,6,6]
29
[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
30
[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50]
30
 [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5]
 15 Read more391James_NagarJul 09, 2024When you consider just consider and move forward, but when you do not consider than do not consider any of it's duplicate, how you make sure it -> just Sort the array and skip all adjacent duplicate elements when you do not consider. Read moreTip5511RafiaDec 01, 2024#TLE 172/176💔 Read more611aman_mnnitOct 01, 2022how to make sure my vector<vector> ans does not contain duplicate values without using set? Read moreAsk Question3119NoahSep 09, 2023Sort the candidates array then when looping over candidates, use a "previous" variable that holds the most recently used number in it. At the start of your loop, if previous == candidates[i], continue to the next number. This, along with setting up your recursive function the right way, should allow you to avoid any duplicate combinations.
A bit of code for reference:
       int prev = -1;
       for (int i = ind; i < cand.Length; i++){
           if (currSum + cand[i] > targ) break;
           if (prev == cand[i]) continue;
           currComb.Add(cand[i]);
           findComb(cand, targ, currSum + cand[i], currComb, i + 1);
           currComb.RemoveAt(currComb.Count - 1);
           prev = cand[i];
       }  Read moreTip352rakesh_joshiJun 20, 2016Question says
Given a collection of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.
Each number in C may only be used once in the combination.
For example, given candidate set [10, 1, 2, 7, 6, 1, 5] and target 8,
A solution set is:
[
[1, 7],
[1, 2, 5],
[2, 6],
[1, 1, 6]
]
i am confused of this  condition
Each number in C may only be used once in the combination.
as in this example it has the combination [1,1,6]  i.e. repeating 1's
it is highly appreciable if somebody explains it. Thank you . Read more215lowut02Sep 11, 2023Horrible problem tbh. Read more301123420Copyright © 2025 LeetCode. All rights reserved.