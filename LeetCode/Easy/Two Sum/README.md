1. Two SumSolvedEasyTopicsCompaniesHintGiven an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]


Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


 
Constraints:


	2 <= nums.length <= 104
	-109 <= nums[i] <= 109
	-109 <= target <= 109
	Only one valid answer exists.


 
Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity? Seen this question in a real interview before?1/5YesNoAccepted18,505,851/32.9MAcceptance Rate56.2%TopicsArrayHash TableCompaniesHint 1A really brute force way would be to search for all possible pairs of numbers but that would be too slow. Again, it's best to try out brute force solutions just for completeness. It is from these brute force solutions that you can come up with optimizations.Hint 2So, if we fix one of the numbers, say x, we have to scan the entire array to find the next number y which is value - x where value is the input parameter. Can we change our array somehow so that this search becomes faster?Hint 3The second train of thought is, without changing the array, can we use additional space somehow? Like maybe a hash map to speed up the search?Similar Questions3SumMedium4SumMediumTwo Sum II - Input Array Is SortedMediumTwo Sum III - Data structure designEasySubarray Sum Equals KMediumTwo Sum IV - Input is a BSTEasyTwo Sum Less Than KEasyMax Number of K-Sum PairsMediumCount Good MealsMediumCount Number of Pairs With Absolute Difference KEasyNumber of Pairs of Strings With Concatenation Equal to TargetMediumFind All K-Distant Indices in an ArrayEasyFirst Letter to Appear TwiceEasyNumber of Excellent PairsHardNumber of Arithmetic TripletsEasyNode With Highest Edge ScoreMediumCheck Distances Between Same LettersEasyFind Subarrays With Equal SumEasyLargest Positive Integer That Exists With Its NegativeEasyNumber of Distinct AveragesEasyCount Pairs Whose Sum is Less than TargetEasyDiscussion (1.5K)Choose a typeComment💡 Discussion Rules1. Please don't post any solutions in this discussion.2. The problem discussion is for asking questions about the problem or for sharing tips - anything except for solutions.3. If you'd like to share your solution for feedback and ideas, please head to the solutions tab and post it there.Sort by:BestNo comments yet.1234153Copyright © 2025 LeetCode. All rights reserved.