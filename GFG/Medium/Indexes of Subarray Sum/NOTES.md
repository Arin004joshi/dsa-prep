
          Sliding Window Subarray Sum (Positive Integers Assumption)

          - Summary: This solution uses the Two-Pointer/Sliding Window technique, employing two integer pointers ('start' and 'end') and a long long variable 'sum' to track the current window's sum. The 'end' pointer expands the window by adding elements, and if the 'sum' exceeds 'target', the 'start' pointer contracts the window by subtracting elements until the sum is manageable or the window collapses. If 'sum' equals 'target', it immediately returns the 1-based indices of the window; otherwise, it returns {-1} after checking all possibilities.

          - Time Complexity: O(n) because both the 'start' and 'end' pointers traverse the array at most once, resulting in linear time complexity.
          - Space Complexity: O(1) because the solution only uses a fixed number of extra variables ('n', 'start', 'end', 'sum') regardless of the input size.
          