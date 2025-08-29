
          Dynamic Array

          - Summary: The code implements a dynamic array using a vector of vectors.  It processes queries of two types: type 1 appends an element to a specific sequence within the dynamic array, and type 2 retrieves an element from a sequence and updates a lastAnswer variable. The algorithm iterates through the queries, performing the appropriate operation based on the query type, using bitwise XOR to calculate indices and modulo operations to handle array bounds. The results of type 2 queries are stored and returned.

          - Time Complexity: O(q), where q is the number of queries.  The dominant operation is iterating through the queries.  Appending elements to vectors is amortized O(1).
          - Space Complexity: O(n + q), where n is the size of the dynamic array and q is the number of queries. The space is used primarily for the dynamic array (seqList) and the answers vector. The size of seqList depends on n, and the size of answers depends on the number of type 2 queries.
          