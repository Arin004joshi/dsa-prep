
          LCM And GCD

          - Summary: The code uses a vector to store the calculated least common multiple (LCM) and greatest common divisor (GCD).  It first calculates the GCD of two integers using Euclid's algorithm, iteratively reducing the numbers until the remainder is zero. Then, it calculates the LCM using the formula LCM(a,b) = (a*b)/GCD(a,b) and stores both GCD and LCM in a vector which is then returned. 

          - Time Complexity: O(log(min(a, b))) because the GCD calculation using Euclid's algorithm has a logarithmic time complexity with respect to the minimum of the two input numbers.
          - Space Complexity: O(1) as it only uses a constant amount of extra space to store variables and the result vector regardless of the input size.
          