
          Two Sum

          - Summary: This Java code uses a HashMap to efficiently solve the Two Sum problem. It first populates the HashMap with each number from the input array as the key and its index as the value. Then, it iterates through the array again; for each number, it checks if the complement (target - number) exists in the HashMap. If the complement exists and its index is different from the current number's index, it means a pair adding up to the target is found, and their indices are returned. Otherwise, the loop continues until a pair is found or the array is exhausted.

          - Time Complexity: O(n) because the code iterates through the input array of size 'n' twice, once to populate the HashMap and once to search for the complement.  Hashmap operations (put and containsKey) take O(1) on average.
          - Space Complexity: O(n) because the HashMap stores up to 'n' key-value pairs in the worst case, where each number in the input array is unique.
          