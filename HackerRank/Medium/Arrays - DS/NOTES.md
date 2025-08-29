
          Array Reversal

          - Summary: The code utilizes vectors (dynamic arrays) to store and manipulate integer data.  It first reads an integer array from standard input, then uses the STL `reverse` function to reverse the array's elements in-place. Finally, it writes the reversed array to standard output, handling spacing appropriately.

          - Time Complexity: O(n), where n is the length of the input array. This is because the `reverse` function operates on each element of the array once, and the input and output operations take linear time.
          - Space Complexity: O(n), where n is the length of the input array. This is due to the storage of the input and output vectors. The auxiliary space used by the `reverse` function is constant.
          