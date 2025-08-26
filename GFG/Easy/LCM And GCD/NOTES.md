
          LCM And GCD

          - Summary: The code uses a vector to store the least common multiple (LCM) and greatest common divisor (GCD) of two integers.  The GCD is calculated using Euclid's algorithm, iteratively reducing the numbers until the remainder is zero. The LCM is then calculated using the formula: LCM(a, b) = (a * b) / GCD(a, b). Finally, the LCM and GCD are stored in a vector and returned.

          - Time Complexity: O(log(min(a, b))) The time complexity of the GCD function using Euclid's algorithm is logarithmic with respect to the minimum of the two input numbers.  The remaining operations are constant time.
          - Space Complexity: O(1) The space complexity is constant because the algorithm uses a fixed number of variables regardless of the input size. The vector used for storing the result has a fixed size of 2.
          