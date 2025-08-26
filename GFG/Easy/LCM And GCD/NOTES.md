
          LCM And GCD

          - Summary: The code uses a vector to store the calculated least common multiple (LCM) and greatest common divisor (GCD).  It first calculates the GCD of two input integers using Euclid's algorithm, which iteratively applies the modulo operator until the remainder is zero. Then, it calculates the LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b). Finally, it stores the LCM and GCD in a vector and returns it.

          - Time Complexity: O(log(min(a, b))) because the GCD calculation using Euclid's algorithm has a logarithmic time complexity with respect to the smaller of the two input numbers.
          - Space Complexity: O(1) as the space used is constant regardless of the input size.  The vector to store the result has a fixed size of 2.
          