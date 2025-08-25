242. Valid AnagramSolvedEasyTopicsCompaniesGiven two strings s and t, return true if t is an anagram of s, and false otherwise.

 
Example 1:


Input: s = "anagram", t = "nagaram"

Output: true


Example 2:


Input: s = "rat", t = "car"

Output: false


 
Constraints:


	1 <= s.length, t.length <= 5 * 104
	s and t consist of lowercase English letters.


 
Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
 Seen this question in a real interview before?1/5YesNoAccepted5,151,529/7.7MAcceptance Rate67.0%TopicsHash TableStringSortingCompaniesSimilar QuestionsGroup AnagramsMediumPalindrome PermutationEasyFind All Anagrams in a StringMediumFind Resultant Array After Removing AnagramsEasyDiscussion (277)Choose a typeComment💡 Discussion Rules1. Please don't post any solutions in this discussion.2. The problem discussion is for asking questions about the problem or for sharing tips - anything except for solutions.3. If you'd like to share your solution for feedback and ideas, please head to the solutions tab and post it there.Sort by:BestMuhsin Ali KulbakDec 16, 2023 Read more2365Shaikh Jashir AhmedJul 12, 2023bro what do you mean "...typically using all the original letters exactly once." Does it use every letter exactly once or not??? Read more597Lubor LiuJan 04, 2016Any discussion on how to handle the unicode? Read more5213Ram GoswamiMar 07, 2022If t is the anagram of s then by comparing both sorted strings can give the answer
If t is amagram of s then sorted t must be same as sorted s so,
"""
return sorted(s) == sorted(t)
""" Read more11310AlecDec 16, 2023 Read more653AlgoEngineAug 12, 2023Visualization of hash table approach
 Read more40enamespaceMay 16, 2019when i solve the problem by using array[26], i check the NO.1 solution. he solve the problem by using calculation?
i wonder whether it's math trick or it's simply a his hash function ?
i guess it's a hash function with big probability to ensure no collision so far.
 Read more214Iqra SarwarJan 17, 2023why it is t anagram of s when it is have testcases like
s="ab"
t="a"
and
s="a"
t="ab"
both giving false. isn't it should be both strings anagram of each other? Read more177JacksonJun 15, 2017There seems no discussion about the followup Unicode question. May I ask that is there any idea about it?
The question is a bit vague for me. I understand that Unicode is a binary coding method regardless of program/platform, but how can it reflect on an input string? Read more264harnalerohanApr 20, 2022var isAnagram = (s, t) => s.split('').sort().join('') === t.split('').sort().join('') ? true : false Read more225123428Copyright © 2025 LeetCode. All rights reserved.