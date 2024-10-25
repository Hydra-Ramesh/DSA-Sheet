#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    int minimumOperations(std::vector<int>& nums) {
        std::unordered_set<int> res;
        
        // Loop through the entire array (not just up to n-1)
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                res.insert(nums[i]);
            }
        }
        
        // The size of the set is the count of unique non-zero elements
        return res.size();
    }
};

int main() {
    Solution solution;
    
    // Test cases
    std::vector<int> nums1 = {1};
    std::cout << "Minimum operations to make all elements zero (nums = [1]): " 
              << solution.minimumOperations(nums1) << std::endl; // Expected: 1
    
    std::vector<int> nums2 = {1, 5, 0, 3, 5};
    std::cout << "Minimum operations to make all elements zero (nums = [1, 5, 0, 3, 5]): " 
              << solution.minimumOperations(nums2) << std::endl; // Expected: 3

    std::vector<int> nums3 = {0, 0, 0};
    std::cout << "Minimum operations to make all elements zero (nums = [0, 0, 0]): " 
              << solution.minimumOperations(nums3) << std::endl; // Expected: 0
    
    return 0;
}
