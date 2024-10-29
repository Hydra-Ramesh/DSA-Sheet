#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int k = 1;           // Maximum number of flips (deletions) allowed
        int i = 0, j = 0;    // Sliding window pointers
        int flips = 0;       // Count of zeros within the current window
        int maxLen = 0;      // Stores the length of the longest valid subarray

        while (j < n) {
            if (nums[j] == 1) {
                j++;
            } else {
                if (flips < k) {
                    flips++;
                    j++;
                } else {
                    maxLen = max(maxLen, j - i);
                    while (nums[i] == 1) i++;
                    i++;
                    flips--;  // We have moved past one zero, so decrement flips
                    j++;
                }
            }
        }

        // Final update in case the longest subarray ends at the last element
        maxLen = max(maxLen, j - i);

        return maxLen - 1;  // Subtract 1 since we have to delete one element
    }
};

int main() {
    Solution sol;

    // Sample input
    vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1};

    int result = sol.longestSubarray(nums);
    cout << "The length of the longest subarray of 1's after deleting one element is: " << result << endl;

    return 0;
}
