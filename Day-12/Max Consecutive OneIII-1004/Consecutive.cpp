#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0; // window boundaries
        int flips = 0;     // count of zeros in the current window
        int maxLen = 0;    // maximum length of the window with at most `k` flips

        while (j < n) {
            if (nums[j] == 0) {
                flips++;
            }

            // If flips exceed k, adjust the left boundary of the window
            while (flips > k) {
                if (nums[i] == 0) {
                    flips--;
                }
                i++; // shrink the window from the left
            }

            // Update maxLen with the current window length
            maxLen = max(maxLen, j - i + 1);
            j++; // expand the window to the right
        }

        return maxLen;
    }
};

int main() {
    Solution sol;
    
    // Sample input
    vector<int> nums = {1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1};
    int k = 2;

    int result = sol.longestOnes(nums, k);

    cout << "Longest subarray with at most " << k << " flips: " << result << endl;

    return 0;
}
