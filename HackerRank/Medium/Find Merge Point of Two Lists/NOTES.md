
          Find Merge Point of Two Lists

          - Summary: The code uses singly linked lists to represent two lists. The `findMergeNode` function first calculates the lengths of both lists. Then, it advances the pointer of the longer list to match the length of the shorter list. Finally, it iterates through both lists simultaneously until it finds a common node, returning the data of that node. If no merge point is found, it returns -1.

          - Time Complexity: O(m+n), where m and n are the lengths of the two linked lists. This is because the algorithm iterates through each list once to calculate lengths and then iterates through portions of both lists to find the merge point.
          - Space Complexity: O(1). The algorithm uses a constant amount of extra space to store pointers and length variables, regardless of the input size.
          