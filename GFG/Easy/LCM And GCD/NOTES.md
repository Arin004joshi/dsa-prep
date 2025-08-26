
          LCM And GCD

          - Summary: The code uses a vector to store the calculated least common multiple (LCM) and greatest common divisor (GCD).  It first computes the GCD of two integers using Euclid's algorithm, which iteratively applies the modulo operator until the remainder is zero. Then, it calculates the LCM using the formula (a * b) / GCD(a, b), ensuring to use long long to prevent integer overflow. Finally, it stores the LCM and GCD in a vector and returns it.

          - Time Complexity: O(log(min(a, b))). The time complexity of the GCD function is logarithmic because in each iteration, the value of 'b' is reduced by at least half.  The rest of the operations take constant time.
          - Space Complexity: O(1). The space used is constant because only a few integer variables are used to store intermediate values, regardless of the input size.
          