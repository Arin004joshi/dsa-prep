
          Two Sum

          - Summary: The code utilizes a HashMap to store each number in the input array 'nums' as a key and its index as the value. It then iterates through the array; for each number, it calculates the complement needed to reach the target.  The algorithm checks if this complement exists as a key in the HashMap. If found and its index differs from the current index, it means a pair adding up to the target is found, and their indices are returned. Otherwise, the loop continues until a pair is found or the array is exhausted.

          - Time Complexity: O(n) because the code iterates through the input array 'nums' once to populate the HashMap and then iterates through it again, resulting in a linear time complexity with respect to the size of the input array.
          - Space Complexity: O(n) because the HashMap 'mp' stores at most n key-value pairs, where n is the length of the input array 'nums'. The space used grows linearly with the input size.
          