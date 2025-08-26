
          Two Sum

          - Summary: The code utilizes a HashMap to store each number in the input array `nums` as a key and its index as the value.  It then iterates through the array; for each number, it checks if the complement (target - number) exists as a key in the HashMap. If the complement is found and its index is different from the current index, it means a pair summing to the target is found, and their indices are returned. Otherwise, the loop continues until a pair is found or the array is exhausted.

          - Time Complexity: O(n) because the code iterates through the input array `nums` once to populate the HashMap and then iterates through it again at most once to find the pair. HashMap operations (put and get) have an average time complexity of O(1).
          - Space Complexity: O(n) because in the worst case, the HashMap `mp` will store all the elements of the input array `nums`, resulting in space proportional to the input size.
          