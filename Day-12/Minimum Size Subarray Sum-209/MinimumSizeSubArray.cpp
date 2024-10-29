#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        int minLen = INT_MAX;
        int sum = 0;

        while (j < n) {
            sum += nums[j];

            while (sum >= target) {
                minLen = min(minLen, j - i + 1);
                sum -= nums[i];
                i++;
            }
            j++;
        }

        return minLen == INT_MAX ? 0 : minLen;
    }
};

int main() {
    Solution sol;
    
    // Sample input
    int target = 7;
    vector<int> nums = {2, 3, 1, 2, 4, 3};

    int result = sol.minSubArrayLen(target, nums);
    cout << "Minimum length of a subarray with sum >= " << target << " is: " << result << endl;

    return 0;
}
