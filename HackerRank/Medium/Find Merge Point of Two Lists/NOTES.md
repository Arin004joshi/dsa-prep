
          Find Merge Point of Two Lists

          - Summary: The code uses singly linked lists to represent two lists.  The `findMergeNode` function first calculates the lengths of both lists, then advances the longer list to align the pointers. Finally, it iterates through both lists simultaneously until it finds the node where they merge, returning its data; otherwise it returns -1. The main function constructs two linked lists, merges them at a specified index, and calls `findMergeNode` to find the merge point.

          - Time Complexity: O(m+n), where m and n are the lengths of the two linked lists. This is because the algorithm traverses each list once to determine lengths and once to find the merge point.
          - Space Complexity: O(1). The algorithm uses a constant amount of extra space to store pointers and length variables, regardless of the input size.
          