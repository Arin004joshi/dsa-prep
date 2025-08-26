
          LCM And GCD

          - Summary: The code utilizes the Euclidean algorithm to find the greatest common divisor (GCD) of two integers.  It then calculates the least common multiple (LCM) using the formula LCM(a, b) = (a * b) / GCD(a, b). Finally, it stores the LCM and GCD in a vector and returns it.  A vector is used as a data structure to store and return the results.

          - Time Complexity: O(log(min(a, b))). The Euclidean algorithm's time complexity is logarithmic with respect to the minimum of the two input numbers because in each iteration, the remainder becomes smaller.
          - Space Complexity: O(1). The space used is constant because only a few integer variables and one vector of size 2 are used regardless of input size.
          