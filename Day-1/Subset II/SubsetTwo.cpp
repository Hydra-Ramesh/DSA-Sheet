#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;

class Solution {
public:
    void helper(int i, vector<int>& arr, int n, vector<int>& subset, vector<vector<int>>& powerset) {
        if (i >= n) {
            powerset.push_back(subset);
            return;
        } else {
            // Include the current element
            subset.push_back(arr[i]);
            helper(i + 1, arr, n, subset, powerset);
            
            // Backtrack and remove the current element
            subset.pop_back();

            // Skip duplicate elements
            while (i + 1 < arr.size() && arr[i] == arr[i + 1]) i++;
            
            // Exclude the current element and move on
            helper(i + 1, arr, n, subset, powerset);
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        vector<int> subset;
        vector<vector<int>> powerset;
        helper(0, nums, n, subset, powerset);
        return powerset;
    }
};

int main() {
    Solution sol;

    // Example input with duplicates
    vector<int> nums = {1, 2, 2};

    // Call subsetsWithDup function
    vector<vector<int>> result = sol.subsetsWithDup(nums);

    // Print all subsets
    cout << "Subsets: " << endl;
    for (const auto& subset : result) {
        cout << "[";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
