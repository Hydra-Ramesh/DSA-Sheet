#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>

#define MAX 100000

// Function to print the vector
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> umap;
        stack<int> st;
        int n = nums2.size();
        for (int i = n - 1; i >= 0; i--) {
            int ele = nums2[i];
            while (!st.empty() && st.top() <= ele) {
                st.pop();
            }
            int res = (st.empty()) ? -1 : st.top();
            umap[ele] = res;
            st.push(ele);
        }
        vector<int> ans;
        for (auto x : nums1) {
            ans.push_back(umap[x]);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    
    vector<int> result = sol.nextGreaterElement(nums1, nums2);
    
    cout << "Next Greater Elements: ";
    for (int r : result) {
        cout << r << " ";
    }
    
    return 0;
}
