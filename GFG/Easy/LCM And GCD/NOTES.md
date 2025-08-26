
          LCM And GCD

          - Summary: The code uses a vector to store the calculated LCM and GCD.  It first computes the GCD of two integers using Euclid's algorithm, which iteratively applies the modulo operation until the remainder is zero.  Then, it calculates the LCM using the formula (a * b) / GCD(a, b), ensuring to use long long to prevent integer overflow. Finally, it returns a vector containing the LCM and GCD.

          - Time Complexity: O(log(min(a, b))) because the GCD function uses Euclid's algorithm, which has a time complexity logarithmic in the smaller of the two input numbers. The remaining operations are constant time.
          - Space Complexity: O(1) as the algorithm uses only a fixed number of variables regardless of the input size. The vector used to store the result has a fixed size of 2.
          