
          Find First and Last Position of Element in Sorted Array

          - Summary: The code uses arrays to store the input numbers and the result.  It employs a modified binary search algorithm (`search` function) twice: once to find the leftmost occurrence and once to find the rightmost occurrence of the target value.  The `searchRange` function orchestrates these searches and returns an array containing the start and end indices of the target's range, or {-1, -1} if not found.

          - Time Complexity: O(log n). The binary search algorithm is used, which has a time complexity of O(log n), where n is the length of the input array.  The algorithm is called twice, but this does not change the overall time complexity.
          - Space Complexity: O(1). The algorithm uses a constant amount of extra space to store the indices and intermediate results. The space used does not depend on the size of the input array.
          