
          Two Sum

          - Summary: This Java code utilizes a HashMap to efficiently find two numbers within an array that sum up to a target value.  It first populates the HashMap with array elements as keys and their indices as values. Then, it iterates through the array, checking if the complement (target - current element) exists in the HashMap. If the complement is found and its index differs from the current element's index, it signifies a pair that sums to the target, and their indices are returned. Otherwise, the search continues.

          - Time Complexity: O(n) because the code iterates through the input array once to populate the HashMap and then iterates through it again at most once to find the pair. HashMap operations (put and get) take constant time on average.
          - Space Complexity: O(n) as the HashMap stores a maximum of n key-value pairs, where n is the length of the input array.  The space used grows linearly with the input size.
          