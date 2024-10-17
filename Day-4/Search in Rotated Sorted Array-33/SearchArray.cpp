#include <vector>
#include <iostream>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        
        while (l <= r) {
            int m = l + (r - l) / 2; // Safe calculation of mid
            
            if (nums[m] == target) {
                return m; // Target found
            }

            // Check if the left half is sorted
            if (nums[l] <= nums[m]) { // Correct condition for left sorted half
                // Target is in the left half
                if (nums[l] <= target && target < nums[m]) {
                    r = m - 1; // Search in the left half
                } else {
                    l = m + 1; // Search in the right half
                }
            } else { // Right half must be sorted
                // Target is in the right half
                if (nums[m] < target && target <= nums[r]) {
                    l = m + 1; // Search in the right half
                } else {
                    r = m - 1; // Search in the left half
                }
            }
        }
        return -1; // Target not found
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; // Rotated sorted array
    int target = 0; // Target to search for
    int index = sol.search(nums, target); // Perform the search

    if (index != -1) {
        std::cout << "Target found at index: " << index << std::endl; // Output the index
    } else {
        std::cout << "Target not found." << std::endl; // Output if not found
    }

    return 0;
}
