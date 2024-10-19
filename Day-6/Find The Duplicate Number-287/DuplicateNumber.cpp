#include <iostream>
#include <vector>
#include <algorithm>  // for sort function

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                return nums[i];
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    int n;
    
    // Input number of elements
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    
    // Input the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // Find and print the duplicate number
    int duplicate = solution.findDuplicate(nums);
    if (duplicate != -1) {
        cout << "The duplicate number is: " << duplicate << endl;
    } else {
        cout << "No duplicate found" << endl;
    }
    
    return 0;
}
