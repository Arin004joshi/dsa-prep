class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;  // since one number is missing
        long long total = 1LL * n * (n + 1) / 2;  // expected sum
        long long actual = 0;
        for (int x : arr) actual += x;
        return (int)(total - actual);
    }
};
