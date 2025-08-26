
          # Group Anagrams

          **Summary:** The algorithm uses a boolean array to track visited strings and an ArrayList of ArrayLists to store the grouped anagrams. It iterates through the input string array, checking for unvisited strings. For each unvisited string, it forms a group of anagrams by comparing it with the remaining strings using a helper function 'isAnagram', which sorts the characters of two strings and compares them for equality. Finally, it adds the group to the result list.

          - Time Complexity: O(NKlogK), where N is the number of strings and K is the maximum length of a string. This is because sorting each string takes O(KlogK) time, and the algorithm iterates through all strings and pairs of strings. The outer loop runs N times, and the nested loop runs at most N times.  The `isAnagram` function dominates the runtime complexity.
          - Space Complexity: O(NK), where N is the number of strings and K is the maximum length of a string. This is because in the worst case, all strings could be anagrams of each other, resulting in a list of lists that has approximately NK characters in total. The space used by the `visited` array is O(N), which is dominated by the space used to store the results.
          