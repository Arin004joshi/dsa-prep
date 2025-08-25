class Solution {
  public:
    void printNos(int n) {
        if (n == 0) return;         // base case
        printNos(n - 1);            // recursive call
        cout << n << " ";           // print after recursion
    }
};
