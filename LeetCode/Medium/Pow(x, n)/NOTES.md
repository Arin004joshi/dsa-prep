
          Pow(x, n)

          - Summary: The Java code uses the built-in Math.pow() function to compute x raised to the power of n.  No additional data structures are used. The function directly calls the Math.pow() method, which internally uses a highly optimized algorithm (likely involving logarithms and bit manipulation) to calculate the result. The result, a double-precision floating-point number representing x^n, is then returned.

          - Time Complexity: O(1) - The Math.pow() function in Java has a constant time complexity because it's implemented using highly optimized native code.
          - Space Complexity: O(1) - The function uses constant extra space, regardless of the input values of x and n.
          