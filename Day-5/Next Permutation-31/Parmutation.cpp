#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;

        // Step 1: Find the first decreasing element from the right
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        // Step 2: If no such element is found, reverse the array
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Reverse the part after idx
        reverse(nums.begin() + idx + 1, nums.end());

        // Step 4: Find the smallest number greater than nums[idx] and swap
        for (int i = idx + 1; i < n; i++) {
            if (nums[i] > nums[idx]) {
                swap(nums[idx], nums[i]);
                break;
            }
        }
    }
};

int main() {
    Solution sol;

    // Test case
    vector<int> nums = {1, 2, 3};
    sol.nextPermutation(nums);

    // Output the result
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
