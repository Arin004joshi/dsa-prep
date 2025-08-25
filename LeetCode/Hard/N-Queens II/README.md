52. N-Queens IISolvedHardTopicsCompaniesThe n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return the number of distinct solutions to the n-queens puzzle.

 
Example 1:

Input: n = 4
Output: 2
Explanation: There are two distinct solutions to the 4-queens puzzle as shown.


Example 2:

Input: n = 1
Output: 1


 
Constraints:


	1 <= n <= 9

 Seen this question in a real interview before?1/5YesNoAccepted520,253/673.9KAcceptance Rate77.2%TopicsBacktrackingCompaniesSimilar QuestionsN-QueensHardDiscussion (94)Choose a typeComment💡 Discussion Rules1. Please don't post any solutions in this discussion.2. The problem discussion is for asking questions about the problem or for sharing tips - anything except for solutions.3. If you'd like to share your solution for feedback and ideas, please head to the solutions tab and post it there.Sort by:BestDaniil DubravaOct 04, 2023This problem should be N-Queens I, and N-Queens I should be N-Queens II Read more2426Gary ChienJan 16, 2019Obviously not contributing anything meaningful, but I thought this was amusing. Anyone wanna try to beat me for slowest accepted answer? :P
 Read more17811Ayush GuptaDec 22, 2023ctrl C - ctrl V gang ? Read moreAsk Question1122ShaoOct 07, 2019How is this question different from #51? By backtracking and generating the solutions you generate the count as well. Read more506AnikJul 12, 2024The dopamine hit hard after getting an "accepted" on a hard problem. Read more38Denys GarbuzMay 09, 2024offtopic
My girl is only queen <3 Read more351Frank ChenAug 16, 2023so I need to learn chess before working on leetcode? Read more313JamesApr 24, 2024GOAT SOLUTION:
func totalNQueens(n int) int {     return [9]int{1, 0, 0, 2, 10, 4, 40, 92, 352}[n-1] }  Read more272An-Wen DengAug 02, 2023A film demo how the backtracking works for 8 queens problem
 Read more15Yida TaoDec 22, 2014Should we exclude rotations and reflections of the chessboard?
For instance, consider the 2 solutions of 4-queens in N-Queen. Actually you can get the 2nd solution by rotating the 1st solution 180-degree clockwise.
Likewise, if we exclude rotations and reflections, 8-queens actually has 12 distinct solutions instead of 92. Read more174123410Copyright © 2025 LeetCode. All rights reserved.