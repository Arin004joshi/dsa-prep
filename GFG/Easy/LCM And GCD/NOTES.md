
          LCM And GCD

          - Summary: The code utilizes a vector to store the calculated least common multiple (LCM) and greatest common divisor (GCD).  The GCD is computed using Euclid's algorithm, iteratively reducing the numbers until the remainder is zero. The LCM is then calculated using the formula (a * b) / GCD(a, b). Finally, the LCM and GCD are stored in the vector and returned.

          - Time Complexity: O(log(min(a, b))). The time complexity of the GCD function using Euclid's algorithm is logarithmic with respect to the minimum of the two input numbers because in each iteration, the numbers are reduced by at least half. The rest of the operations are constant time.
          - Space Complexity: O(1). The space used is constant because the algorithm only uses a few integer variables to store intermediate values and the vector to store results has a constant size of 2.
          