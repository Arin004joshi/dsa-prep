
          LCM And GCD

          - Summary: The code uses a vector to store the calculated least common multiple (LCM) and greatest common divisor (GCD) of two input integers.  It first computes the GCD using Euclid's algorithm, iteratively reducing the numbers until the remainder is zero. Then, it calculates the LCM using the formula (a * b) / GCD(a, b), ensuring to use long long to prevent integer overflow. Finally, it stores both LCM and GCD in a vector and returns it.

          - Time Complexity: O(log(min(a, b))). The time complexity of the GCD function using Euclid's algorithm is logarithmic with respect to the minimum of the two input numbers, as each iteration reduces the numbers significantly.
          - Space Complexity: O(1). The space complexity is constant because only a few integer variables and a vector of size 2 are used, regardless of the input size.
          