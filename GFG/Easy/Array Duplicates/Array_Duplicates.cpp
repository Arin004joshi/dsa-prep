class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            int x = abs(arr[i]);
            if (arr[x - 1] < 0) {
                ans.push_back(x);
            } else {
                arr[x - 1] = -arr[x - 1];
            }
        }
        return ans;
    }
};
