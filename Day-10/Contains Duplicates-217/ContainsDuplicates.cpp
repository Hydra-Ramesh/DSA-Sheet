#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++) {  // Stop at n - 1
            if (nums[i] == nums[i + 1]) {   // Check consecutive elements
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums;

    // Example input
    nums = {1, 2, 3, 4};
    cout << "Does [1, 2, 3, 4] contain duplicates? " << (solution.containsDuplicate(nums) ? "Yes" : "No") << endl;

    nums = {1, 2, 3, 1};
    cout << "Does [1, 2, 3, 1] contain duplicates? " << (solution.containsDuplicate(nums) ? "Yes" : "No") << endl;

    nums = {1, 1, 2, 3, 4};
    cout << "Does [1, 1, 2, 3, 4] contain duplicates? " << (solution.containsDuplicate(nums) ? "Yes" : "No") << endl;

    return 0;
}
