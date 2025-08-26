
          # Longest Palindromic Substring

          **Summary:** The algorithm uses Manacher's algorithm to find the longest palindromic substring.  It employs a character array `t` to preprocess the input string `s`, adding special characters to handle even-length palindromes efficiently. An integer array `p` stores the lengths of palindromes centered at each position in `t`. The algorithm iteratively expands around each center, updating `p`, `center`, and `right` to track the longest palindrome found so far.

          - Time Complexity: O(n) because the main loop iterates through the transformed string `t` once, which is linearly proportional to the length of the original string `s`.  The inner `while` loop's total iterations are also bounded by O(n).
          - Space Complexity: O(n) because the algorithm uses an array `t` and an array `p`, both of which are linearly proportional to the length of the transformed string, which is O(n) compared to the original string.
          