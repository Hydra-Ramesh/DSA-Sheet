#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;  // 2D vector to store Pascal's Triangle
        
        // Generate numRows rows
        for (int i = 0; i < numRows; i++) {
            vector<int> a(i + 1);  // Create a vector of size i+1 for row i
            v.push_back(a);  // Add the row to the 2D vector
            
            // Fill the current row
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    v[i][j] = 1;  // First and last element of each row is 1
                } else {
                    v[i][j] = v[i-1][j-1] + v[i-1][j];  // Sum of the two elements above
                }
            }
        }
        
        return v;  // Return the final Pascal's Triangle
    }
};

int main() {
    Solution sol;
    
    // Test case
    int numRows = 5;
    vector<vector<int>> result = sol.generate(numRows);
    
    // Print the result
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
