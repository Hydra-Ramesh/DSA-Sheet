#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 1) return strs[0]; // If there's only one string, return it as the common prefix
        
        // Sort the array of strings
        sort(strs.begin(), strs.end());
        
        // The first and last strings after sorting
        string first = strs[0];
        string last = strs[n - 1];
        string s = "";
        
        // Compare the characters of the first and last strings
        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] == last[i]) {
                s += first[i]; // Add the matching character to the result
            } else {
                return s; // Return the result if characters don't match
            }
        }
        return s; // Return the result
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Longest common prefix (Test 1): " << sol.longestCommonPrefix(strs1) << endl; // Output: "fl"

    // Test case 2
    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Longest common prefix (Test 2): " << sol.longestCommonPrefix(strs2) << endl; // Output: ""

    // Test case 3
    vector<string> strs3 = {"interspecies", "interstellar", "interstate"};
    cout << "Longest common prefix (Test 3): " << sol.longestCommonPrefix(strs3) << endl; // Output: "inters"

    // Test case 4
    vector<string> strs4 = {"a"};
    cout << "Longest common prefix (Test 4): " << sol.longestCommonPrefix(strs4) << endl; // Output: "a"

    return 0;
}
