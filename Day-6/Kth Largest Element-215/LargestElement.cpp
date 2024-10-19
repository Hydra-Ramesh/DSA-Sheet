#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort

class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
        int n = nums.size();          // Get the size of the vector
        std::sort(nums.begin(), nums.end());  // Sort the vector
        return nums[n - k];           // Return the k-th largest element
    }
};

int main() {
    Solution solution;

    // Example input
    std::vector<int> nums = {3, 2, 1, 5, 6, 4};  // The array
    int k = 2;  // We want to find the 2nd largest element

    // Call the function and output the result
    int result = solution.findKthLargest(nums, k);
    std::cout << "The " << k << "-th largest element is: " << result << std::endl;

    return 0;
}
