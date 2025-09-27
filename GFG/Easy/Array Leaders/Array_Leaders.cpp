#include <vector>
#include <algorithm> // Required for std::reverse

class Solution {
    // Function to find the leaders in the array.
public:
    std::vector<int> leaders(std::vector<int>& arr) {
        // Result vector to store the leaders.
        std::vector<int> result;
        int n = arr.size();

        // Handle the case of an empty array (though constraints suggest N >= 1)
        if (n == 0) {
            return result;
        }

        // The rightmost element is always a leader.
        // Initialize max_from_right with the rightmost element.
        int max_from_right = arr[n - 1];
        result.push_back(max_from_right);

        // Iterate from the second-to-last element to the first element.
        for (int i = n - 2; i >= 0; --i) {
            // An element arr[i] is a leader if it is greater than or equal to
            // the maximum element found so far to its right.
            if (arr[i] >= max_from_right) {
                // arr[i] is a leader, add it to the result.
                result.push_back(arr[i]);
                
                // Update the maximum element seen so far from the right.
                max_from_right = arr[i];
            }
        }

        // The leaders were collected in reverse order (right-to-left).
        // Reverse the result vector to get them in the original array order (left-to-right).
        std::reverse(result.begin(), result.end());

        return result;
    }
};