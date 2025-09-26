class Solution {
 public:
  /**
   * Finds the second largest distinct element in the array.
   * Time Complexity: O(n)
   * Space Complexity: O(1)
   */
  int getSecondLargest(std::vector<int>& arr) {
    if (arr.size() < 2) {
      // If the array has less than 2 elements, the second largest doesn't exist.
      return -1;
    }

    // Initialize largest and secondLargest. Since array elements are positive (>= 1),
    // we can initialize them to -1.
    int largest = -1;
    int secondLargest = -1;

    for (int num : arr) {
      if (num > largest) {
        // If the current element is greater than the current largest,
        // the old largest becomes the new secondLargest, and the current element
        // becomes the new largest.
        secondLargest = largest;
        largest = num;
      } else if (num < largest && num > secondLargest) {
        // If the current element is smaller than the largest but greater than
        // the current secondLargest, it becomes the new secondLargest.
        // This ensures distinctness: num < largest
        secondLargest = num;
      }
      // If num == largest, we ignore it as we are looking for a distinct second largest.
      // If num <= secondLargest, we also ignore it.
    }

    // The result is the value stored in secondLargest. If no distinct second largest
    // was found (e.g., all elements are the same, like [10, 10, 10]), it will remain -1.
    return secondLargest;
  }
};