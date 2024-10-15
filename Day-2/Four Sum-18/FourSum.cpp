#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;  // Skip duplicates
            
            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;  // Skip duplicates
                
                int lo = j + 1;
                int hi = n - 1;
                
                while (lo < hi) {
                    long long sum = (long long)nums[i] + nums[j] + nums[lo] + nums[hi]; // Handle overflow
                    
                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[lo], nums[hi]});
                        lo++;
                        hi--;
                        
                        while (lo < hi && nums[lo] == nums[lo - 1]) lo++;  // Skip duplicates
                        while (lo < hi && nums[hi] == nums[hi + 1]) hi--;  // Skip duplicates
                    }
                    else if (sum < target) {
                        lo++;
                    }
                    else {
                        hi--;
                    }
                }
            }
        }
        
        return ans;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> result = sol.fourSum(nums, target);

    cout << "Quadruplets summing to " << target << ": " << endl;
    for (const auto& quad : result) {
        for (int num : quad) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
