#include <vector>
#include <unordered_map>
#include <queue>
#include <iostream>

using namespace std;

class Solution {
public:
    typedef pair<int, int> pi;
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        // Step 1: Count the frequency of each element
        for (int ele : nums) {
            mp[ele]++;
        }

        // Step 2: Min-heap to track top k frequent elements
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        
        for (auto x : mp) {
            pq.push({x.second, x.first});  // Push (frequency, element)
            if (pq.size() > k) pq.pop();   // Maintain heap size
        }

        // Step 3: Extract elements from heap
        vector<int> ans;
        while (!pq.empty()) {
            ans.push_back(pq.top().second);  // Collect the element, not frequency
            pq.pop();
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    // Call the function to get top k frequent elements
    vector<int> result = sol.topKFrequent(nums, k);

    // Output the result
    cout << "Top " << k << " frequent elements are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
