
          LCM And GCD

          - Summary: The code calculates the greatest common divisor (GCD) and least common multiple (LCM) of two integers.  It uses Euclid's algorithm for GCD calculation within a `gcd` function. The `lcmAndGcd` function then computes the LCM using the formula (a*b)/GCD(a,b) and returns both LCM and GCD in a vector. A vector is used to store and return the results. 

          - Time Complexity: O(log(min(a, b))) - The time complexity of the Euclidean algorithm for GCD is logarithmic with respect to the smaller of the two input numbers.  The rest of the operations are constant time.
          - Space Complexity: O(1) - The space complexity is constant because only a few integer variables and a vector of size 2 are used, regardless of the input size.
          