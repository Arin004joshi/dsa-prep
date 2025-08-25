83. Remove Duplicates from Sorted List
Solved
Easy
Topics
Companies

Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

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
 
Seen this question in a real interview before?
1/5
Yes
No
Accepted
2,054,992/3.7M
Acceptance Rate
55.3%
Topics
Linked List
Companies
Similar Questions
Remove Duplicates from Sorted List II
Medium
Remove Duplicates From an Unsorted Linked List
Medium
Discussion (135)
Choose a type
Comment
💡 Discussion Rules

1. Please don't post any solutions in this discussion.

2. The problem discussion is for asking questions about the problem or for sharing tips - anything except for solutions.

3. If you'd like to share your solution for feedback and ideas, please head to the solutions tab and post it there.

Sort by:Best
M1dn1ght
Nov 12, 2023

if this was easy i dont even want to see a medium linked list problem

 
157
15
LeetCanCode
Sep 07, 2023

Additional tests:
[1,1,1]
[1,2,2]
[1,1,2,3,3]
[1,1,2,2,3,3]
[1,2,2,3]
[1]
[]
[1,1]

 
Tip
57
4
anlunx
Jun 13, 2019

Why give a null test case?

 
27
3
Samiksha
Apr 22, 2022

Hi.

I'm new to python programming. It'd be very helpful if someone can explain why do we use Optional?

'''
def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
'''

**Here, why do we use Optional[ListNode]? How is it useful? **

 
Read more
25
7
Aaryan
Sep 10, 2023

Simple Approach

In this approach we will only use single pointer and iterate over the list while checking for duplicate nodes and deleting them simultanously also.

Initialize a pointer to head, here I used 'temp' and iterate it over the linked list.

In each each iteration check if data of next node of temp and data of current node of temp are equal or not , if both data are equal then we have a duplicate value , so update the next node of 'temp' to temp->next->next;

While we update the next value of temp if duplicate value is found we also need to delete the node where duplicate value exist, NOTE:- It will be better practice if you store the node to be deleted in another variable and then delete this variable instead of directly deleting the node to be delected bcoz it may lead to errors.

But if the next value of temp is not equal to temp i.e no duplicate value then move the temp to next position , repeat this process and when the loop terminates you will get your list without duplicate values.

 
Read more
Tip
22
5
rostikcode15
Mar 29, 2025

FIRST TIME, solved some easy leetcode problem in less then 20 minutes, i am so proud of myself, lezzgo

 
12
1
rashmi_jain18
Nov 03, 2022

Hello everyone, I am not able to understand that any changes done to current(temp pointer to the node) changes value in head. Can anyone explain
var current = head;
while (current.next != null) {
if (current.next.val == current.val) {
current.next = current.next.next;
}
else {
current = current.next;
}
}

Is it because its reference type?

 
Read more
Ask Question
10
6
Nicaishisha
Dec 29, 2013

In an interview, will that matter if we forget to delete the duplicate nodes? It appears we do not need to delete here.

 
8
4
Shivam Sharma
Sep 27, 2024

Move to the next node only when data in the next node is not equal.
This will be helpful test cases like [1, 1, 1].

 
Tip
7
1
yuu
Jan 08, 2025

Linked lists aint real

 
3
1
2
3
4
14
Copyright © 2025 LeetCode. All rights reserved.