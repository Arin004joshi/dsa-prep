
          Find Merge Point of Two Lists

          - Summary: The code utilizes singly linked lists to represent two lists. The `findMergeNode` function first calculates the lengths of both lists.  Then, it advances the pointer of the longer list to align both pointers at the same distance from the merge point. Finally, it iterates through both lists simultaneously until it finds the node where both pointers are equal, returning the data of that node as the merge point.

          - Time Complexity: O(m+n), where 'm' and 'n' are the lengths of the two linked lists. This is because the algorithm iterates through each list once to determine its length and then iterates through portions of each list to find the merge point.
          - Space Complexity: O(1). The algorithm uses a constant amount of extra space to store variables like lengths and pointers; it doesn't scale with the size of the input lists.
          