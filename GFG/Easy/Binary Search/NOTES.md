
          Binary Search

          - Summary: This code implements a binary search algorithm using a sorted integer array. It initializes pointers 'left' and 'right' to the start and end of the array, respectively.  The algorithm iteratively narrows the search space by comparing the middle element with the target value 'k', updating 'left' or 'right' accordingly.  If 'k' is found, the function returns its index; otherwise, it returns -1.

          - Time Complexity: O(log n) because the search space is halved in each iteration of the while loop.  The number of iterations is proportional to the logarithm base 2 of the array size.
          - Space Complexity: O(1) because the algorithm uses a constant amount of extra space regardless of the input array size.  Only a few integer variables are used to store indices and the result.
          