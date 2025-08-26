
          LCM And GCD

          - Summary: The code uses a vector to store the calculated least common multiple (LCM) and greatest common divisor (GCD) of two input integers.  It first calculates the GCD using Euclid's algorithm, iteratively reducing the numbers until the remainder is zero. Then, it calculates the LCM using the formula (a * b) / GCD(a, b), ensuring to use long long to prevent integer overflow. Finally, it stores the LCM and GCD in a vector and returns it.

          - Time Complexity: O(log(min(a, b))) because the GCD function using Euclid's algorithm has a time complexity of O(log(min(a, b))). The remaining operations are constant time.
          - Space Complexity: O(1) as the algorithm uses a fixed amount of space irrespective of the input size.  The vector used to store the result has a constant size of 2.
          