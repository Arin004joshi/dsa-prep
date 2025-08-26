
          LCM And GCD

          - Summary: The code uses a vector to store the calculated least common multiple (LCM) and greatest common divisor (GCD).  The `gcd` function employs Euclid's algorithm to iteratively find the GCD of two integers. The `lcmAndGcd` function calculates the GCD using the `gcd` function, then computes the LCM using the formula (a * b) / GCD(a, b), and finally returns both values in a vector.  No hashmaps or arrays are used beyond the vector for the result.

          - Time Complexity: O(log(min(a, b))) The time complexity of the `gcd` function is determined by Euclid's algorithm, which has a logarithmic time complexity with respect to the smaller of the two input numbers. The rest of the operations in `lcmAndGcd` are constant time.
          - Space Complexity: O(1) The space complexity is constant because the algorithm uses a fixed amount of extra space regardless of the input size. The vector used for storing the result has a constant size of 2.
          