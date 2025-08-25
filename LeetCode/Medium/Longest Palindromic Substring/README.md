5. Longest Palindromic SubstringSolvedMediumTopicsCompaniesHintGiven a string s, return the longest palindromic substring in s.

 
Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.


Example 2:

Input: s = "cbbd"
Output: "bb"


 
Constraints:


	1 <= s.length <= 1000
	s consist of only digits and English letters.

 Seen this question in a real interview before?1/5YesNoAccepted4,089,657/11.3MAcceptance Rate36.3%TopicsTwo PointersStringDynamic ProgrammingCompaniesHint 1How can we reuse a previously computed palindrome to compute a larger palindrome?Hint 2If “aba” is a palindrome, is “xabax” a palindrome? Similarly is “xabay” a palindrome?Hint 3Complexity based hint:
If we use brute-force and check whether for every start and end position a substring is a palindrome we have O(n^2) start - end pairs and O(n) palindromic checks. Can we reduce the time for palindromic checks to O(1) by reusing some previous computation.Similar QuestionsShortest PalindromeHardPalindrome PermutationEasyPalindrome PairsHardLongest Palindromic SubsequenceMediumPalindromic SubstringsMediumMaximum Number of Non-overlapping Palindrome SubstringsHardDiscussion (494)Choose a typeComment💡 Discussion Rules1. Please don't post any solutions in this discussion.2. The problem discussion is for asking questions about the problem or for sharing tips - anything except for solutions.3. If you'd like to share your solution for feedback and ideas, please head to the solutions tab and post it there.Sort by:BestNo comments yet.123450Copyright © 2025 LeetCode. All rights reserved.