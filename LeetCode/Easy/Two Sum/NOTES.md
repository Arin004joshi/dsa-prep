
          Two Sum

          - Summary: This Java code utilizes a HashMap to efficiently find two numbers within an array that add up to a specified target.  The algorithm first populates the HashMap with array elements as keys and their indices as values. Then, it iterates through the array; for each number, it checks if the complement (target - number) exists in the HashMap. If the complement is found and its index differs from the current number's index, it signifies a pair, and their indices are returned. Otherwise, the loop continues until a pair is found or the array is exhausted.

          - Time Complexity: O(n) because the code iterates through the input array 'nums' once to populate the HashMap and then iterates through it again at most once to find the pair. HashMap operations (containsKey, get, put) have an average time complexity of O(1).
          - Space Complexity: O(n) because in the worst-case scenario, the HashMap 'mp' will store all 'n' elements from the input array 'nums'.
          