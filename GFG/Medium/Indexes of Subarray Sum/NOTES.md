
          Indexes of Subarray Sum

          - Summary: The code uses a `vector` (dynamic array) to store the input array and return the result. It employs a sliding window approach using two pointers, `start` and `end`, to iterate through subarrays.  The `sum` variable keeps track of the current subarray's sum. The algorithm iterates, expanding the window (increasing `end`) and shrinking it (increasing `start`) as needed to maintain a sum less than or equal to the target.  If a subarray with the target sum is found, its 1-based start and end indices are returned; otherwise, -1 is returned.

          - Time Complexity: O(n) because each element in the input array `arr` is visited and processed at most twice: once when the `end` pointer moves over it, and possibly once when the `start` pointer moves over it while shrinking the window.
          - Space Complexity: O(1). The algorithm uses a constant amount of extra space to store variables like `n`, `start`, `sum`, and the result vector.  The space used does not scale with the input array size.
          