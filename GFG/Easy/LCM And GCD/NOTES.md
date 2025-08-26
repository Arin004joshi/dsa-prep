
          LCM And GCD

          - Summary: The code calculates the greatest common divisor (GCD) and least common multiple (LCM) of two integers. It uses Euclid's algorithm to find the GCD iteratively, then calculates the LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b).  A vector is used to store and return the calculated LCM and GCD. The GCD function uses a while loop and temporary variables for iterative calculations, while the LCMAndGCD function utilizes the GCD function's result for LCM calculation.

          - Time Complexity: O(log(min(a, b))) because the GCD calculation using Euclid's algorithm has a logarithmic time complexity with respect to the minimum of the two input numbers.
          - Space Complexity: O(1). The space used is constant as it only involves a few integer variables and does not scale with the input size.  The vector used for returning the results has a fixed size of 2.
          