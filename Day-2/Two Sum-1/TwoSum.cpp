#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int n = nums.size();
        for (int i = 0; i <= n - 1; i++) {
            for (int j = i + 1; j <= n - 1; j++) {
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Example input
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Call the twoSum function
    vector<int> result = solution.twoSum(nums, target);

    // Output the result
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
