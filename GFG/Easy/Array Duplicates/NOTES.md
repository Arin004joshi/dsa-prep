
          Array Duplicates

          - Summary: The code utilizes a single array to store the input numbers and identify duplicates. It iterates through the array; for each number, it checks if the corresponding index (number - 1) has a negative value. If negative, the number is already encountered and added to the result vector; otherwise, it negates the value at that index to mark the number as seen. The algorithm leverages the array itself to track seen numbers, avoiding extra space for a hash map.

          - Time Complexity: O(n) because the code iterates through the input array once. Each operation inside the loop takes constant time.
          - Space Complexity: O(1) in addition to output.  While the input array is modified, the extra space used is constant and does not depend on the input size. The space complexity is dominated by the size of the output vector, which in the worst case can be O(n), if all numbers are duplicates. In reality, though, the output will always be less than n
          