
          LCM And GCD

          - Summary: The code uses a vector to store the calculated least common multiple (LCM) and greatest common divisor (GCD).  The `gcd` function employs Euclid's algorithm to iteratively find the GCD of two integers. The `lcmAndGcd` function calculates the GCD using the `gcd` function, then computes the LCM using the formula (a * b) / GCD(a, b), and finally stores both values in a vector for return.

          - Time Complexity: O(log(min(a, b))) The time complexity of the GCD function using Euclid's algorithm is logarithmic with respect to the minimum of the two input numbers. The remaining operations in lcmAndGcd have constant time complexity.
          - Space Complexity: O(1) The space complexity is constant because the algorithm uses a fixed number of variables regardless of the input size. The vector used for output has a fixed size of 2.
          