
          LCM And GCD

          - Summary: The code uses a vector to store the calculated least common multiple (LCM) and greatest common divisor (GCD).  It first calculates the GCD of two input integers using Euclid's algorithm, iteratively reducing the numbers until the remainder is zero. Then, it calculates the LCM using the formula (a * b) / GCD(a, b), ensuring to avoid integer overflow by using a long long intermediate variable. Finally, it returns a vector containing the LCM and GCD.

          - Time Complexity: O(log(min(a, b))) The time complexity of the GCD calculation using Euclid's algorithm is logarithmic with respect to the minimum of the two input numbers. The rest of the operations take constant time.
          - Space Complexity: O(1) The space complexity is constant because the algorithm uses a fixed number of variables regardless of the input size. The vector used for output has a fixed size of 2.
          