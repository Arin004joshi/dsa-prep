
          LCM And GCD

          - Summary: The code uses a vector to store the calculated least common multiple (LCM) and greatest common divisor (GCD).  The `gcd` function employs Euclid's algorithm to iteratively find the GCD of two integers. The `lcmAndGcd` function calculates the GCD using the `gcd` function, then computes the LCM using the formula (a * b) / GCD(a, b), and finally returns both LCM and GCD in a vector.

          - Time Complexity: O(log(min(a, b))) because the Euclidean algorithm for GCD has a logarithmic time complexity. The remaining operations are constant time.
          - Space Complexity: O(1). The space used is constant regardless of input size because only a few integer variables and a vector of size 2 are used.
          