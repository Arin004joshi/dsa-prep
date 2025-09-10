
          Median Updates

          - Summary: This C++ code maintains a dynamic median of a stream of numbers using two multisets, `leftHalf` and `rightHalf`, to store the smaller and larger halves of the data, respectively.  The `addNumber` function inserts a new number into the appropriate half, and `rebalance` ensures the sizes of the multisets differ by at most one. The `removeNumber` function removes a number and rebalances.  The `printMedian` function computes and prints the median based on the sizes of the multisets.

          - Time Complexity: O(n log n).  The `addNumber` and `removeNumber` functions, which are called n times, involve operations on multisets which have logarithmic time complexity for insertion, deletion, and finding the smallest/largest element. The rebalancing operation is also logarithmic in the number of elements.
          - Space Complexity: O(n). The multisets `leftHalf` and `rightHalf` store at most n numbers in total, and the input vectors `s` and `X` also take O(n) space.
          