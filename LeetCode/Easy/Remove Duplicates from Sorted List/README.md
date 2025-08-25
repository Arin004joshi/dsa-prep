83. Remove Duplicates from Sorted ListSolvedEasyTopicsCompaniesGiven the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 
Example 1:

Input: head = [1,1,2]
Output: [1,2]


Example 2:

Input: head = [1,1,2,3,3]
Output: [1,2,3]


 
Constraints:


	The number of nodes in the list is in the range [0, 300].
	-100 <= Node.val <= 100
	The list is guaranteed to be sorted in ascending order.

 Seen this question in a real interview before?1/5YesNoAccepted2,054,992/3.7MAcceptance Rate55.3%TopicsLinked ListCompaniesSimilar QuestionsRemove Duplicates from Sorted List IIMediumRemove Duplicates From an Unsorted Linked ListMediumDiscussion (135)Choose a typeComment💡 Discussion Rules1. Please don't post any solutions in this discussion.2. The problem discussion is for asking questions about the problem or for sharing tips - anything except for solutions.3. If you'd like to share your solution for feedback and ideas, please head to the solutions tab and post it there.Sort by:BestM1dn1ghtNov 12, 2023if this was easy i dont even want to see a medium linked list problem Read more15715LeetCanCodeSep 07, 2023Additional tests:
[1,1,1]
[1,2,2]
[1,1,2,3,3]
[1,1,2,2,3,3]
[1,2,2,3]
[1]
[]
[1,1] Read moreTip574anlunxJun 13, 2019Why give a null test case? Read more273SamikshaApr 22, 2022Hi.
I'm new to python programming. It'd be very helpful if someone can explain why do we use Optional?
'''
def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
'''
**Here, why do we use Optional[ListNode]? How is it useful? ** Read more257AaryanSep 10, 2023Simple Approach
In this approach we will only use single pointer and iterate over the list while checking for duplicate nodes and deleting them simultanously also.


Initialize a pointer to head, here I used 'temp' and iterate it over the linked list.


In each each iteration check if data of next node of temp and data of current node of temp are equal or not , if both data are equal then we have a duplicate value , so update the next node of 'temp' to temp->next->next;


While we update the next value of temp if duplicate value is found we also need to delete the node where duplicate value exist, NOTE:- It will be better practice if you store the node to be deleted in another variable and then delete this variable instead of directly deleting the node to be delected bcoz it may lead to errors.


But if the next value of temp is not equal to temp i.e no duplicate value then move the temp to next position , repeat this process and when the loop terminates you will get your list without duplicate values.

 Read moreTip225rostikcode15Mar 29, 2025FIRST TIME, solved some easy leetcode problem in less then 20 minutes, i am so proud of myself, lezzgo Read more121rashmi_jain18Nov 03, 2022Hello everyone, I am not able to understand that any changes done to current(temp pointer to the node) changes value in head. Can anyone explain
var current = head;
while (current.next != null) {
if (current.next.val == current.val) {
current.next = current.next.next;
}
else {
current = current.next;
}
}
Is it because its reference type? Read moreAsk Question106NicaishishaDec 29, 2013In an interview, will that matter if we forget to delete the duplicate nodes? It appears we do not need to delete here. Read more84Shivam SharmaSep 27, 2024Move to the next node only when data in the next node is not equal.
This will be helpful test cases like [1, 1, 1]. Read moreTip71yuuJan 08, 2025Linked lists aint real Read more3123414Copyright © 2025 LeetCode. All rights reserved.