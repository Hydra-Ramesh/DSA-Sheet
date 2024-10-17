#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_current = nums[0];
        int max_global = nums[0];

        // Iterate through the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            // Update the max current value
            max_current = max(nums[i], max_current + nums[i]);

            // Update the global max if the current max is larger
            if (max_current > max_global) {
                max_global = max_current;
            }
        }

        return max_global;  // Return the maximum subarray sum
    }
};

int main() {
    Solution sol;

    // Test case
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = sol.maxSubArray(nums);

    // Output the result
    cout << "The maximum subarray sum is: " << result << endl;

    return 0;
}
