
          Two Sum

          - Summary: The code uses a HashMap to store each number in the input array `nums` as a key and its index as the value.  It then iterates through the array; for each number, it checks if the complement (target - number) exists as a key in the HashMap. If the complement exists and its index is different from the current number's index, it means a pair adding up to the target is found, and their indices are returned. Otherwise, the loop continues until a pair is found or the array is exhausted.

          - Time Complexity: O(n) because the code iterates through the input array `nums` once to populate the HashMap and then iterates through it again at most once to find the pair.  HashMap operations (put and get) take constant time on average.
          - Space Complexity: O(n) because the HashMap `mp` stores at most n key-value pairs, where n is the length of the input array `nums`.
          