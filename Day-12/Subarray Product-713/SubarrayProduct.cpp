#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;  // No subarrays can have a product less than k if k <= 1
        
        int n = nums.size();
        int i = 0;
        int j = 0;
        int count = 0;
        int product = 1;

        while (j < n) {
            product *= nums[j];  // Expand the window by multiplying the current number

            // Shrink the window from the left until the product is less than k
            while (product >= k) {
                product /= nums[i];  // Divide by the leftmost number to reduce product
                i++;                 // Move left pointer right
            }
            
            // Count the number of subarrays ending at j
            count += (j - i + 1);  // All subarrays from i to j are valid
            j++;                    // Move right pointer
        }
        
        return count;
    }
};

int main() {
    Solution sol;
    
    // Sample input
    vector<int> nums = {10, 5, 2, 6};
    int k = 100;

    int result = sol.numSubarrayProductLessThanK(nums, k);
    cout << "Number of subarrays with product less than " << k << " is: " << result << endl;

    return 0;
}
