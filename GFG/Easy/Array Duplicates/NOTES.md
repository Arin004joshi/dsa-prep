
          Array Duplicates

          - Summary: The code utilizes a single array to store input numbers and identify duplicates. It iterates through the array; for each number, it checks if the corresponding element (number-1 index) is negative. If negative, it indicates a previous encounter of that number, adding it to the result vector. Otherwise, it negates the corresponding element to mark the current number as encountered. The algorithm cleverly uses the array itself to track seen numbers without using extra space.

          - Time Complexity: O(n) because the code iterates through the input array once. Each operation within the loop takes constant time.
          - Space Complexity: O(n) in the worst case, where n is the size of the input array. This is because the space used by the `ans` vector can grow up to the size of the input array if many numbers are duplicated.
          