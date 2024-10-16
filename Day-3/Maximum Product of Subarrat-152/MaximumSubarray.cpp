#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = INT_MIN;  // Store the maximum product
        int n = nums.size();       // Size of the array
        
        // Iterate over all subarrays
        for (int i = 0; i < n; i++) {
            int product = 1;  // Reset product for each new subarray starting at index i
            
            for (int j = i; j < n; j++) {
                product *= nums[j];  // Multiply current subarray elements
                
                // Update maxProduct if we find a larger product
                maxProduct = max(product, maxProduct);
            }
        }
        
        return maxProduct;
    }
};

int main() {
    // Test case
    vector<int> nums = {2, 3, -2, 4};

    // Create an object of the Solution class
    Solution sol;

    // Call the maxProduct function and print the result
    int result = sol.maxProduct(nums);
    cout << "The maximum product of a subarray is: " << result << endl;

    return 0;
}
