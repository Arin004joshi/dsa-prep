
          Group Anagrams

          *Summary: The algorithm uses an ArrayList of ArrayLists of Strings to store the grouped anagrams and a boolean array to track visited strings. It iterates through the input array, and for each unvisited string, it forms a group of anagrams by comparing it with the remaining strings using a helper function 'isAnagram'.  The 'isAnagram' function uses character arrays and sorting to efficiently determine if two strings are anagrams. Finally, it returns the ArrayList of anagram groups.

          - Time Complexity: O(NKlogK), where N is the number of strings and K is the maximum length of a string. This is because sorting each string takes O(KlogK) time, and we perform this operation for each string. The nested loops contribute an additional O(N^2) factor in the worst case but is dominated by the sorting.
          - Space Complexity: O(NK), where N is the number of strings and K is the maximum length of a string. This is due to the space used for storing the result ArrayList and the temporary character arrays used in the isAnagram function.
          