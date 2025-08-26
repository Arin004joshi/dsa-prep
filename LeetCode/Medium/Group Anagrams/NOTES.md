
           Group Anagrams
           undefined

          Summary: The algorithm uses an ArrayList of ArrayLists of Strings to store the grouped anagrams and a boolean array to track visited strings. It iterates through the input array of strings. For each string, it checks if it's already visited. If not, it creates a new group, adds the string to the group, marks it as visited, and then iterates through the remaining strings to find and add any anagrams to the group. Finally, it adds the group to the result list.

          - Time Complexity: O(m*n*log m), where n is the number of strings and m is the maximum length of a string. This is because the isAnagram function takes O(m log m) time for sorting and the nested loops iterate up to n*n times in the worst case.
          - Space Complexity: O(n*m), where n is the number of strings and m is the maximum length of a string. The space complexity is dominated by the ArrayList of ArrayLists to store the grouped anagrams and the space required for sorting the character arrays.
          