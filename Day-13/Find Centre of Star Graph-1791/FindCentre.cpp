#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int a = edges[0][0];
        int b = edges[0][1];
        int c = edges[1][0];
        int d = edges[1][1];
        return (c == a || c == b) ? c : d;
    }
};

int main() {
    Solution solution;

    // Example 1: Star graph centered at 2
    vector<vector<int>> edges1 = {{1, 2}, {2, 3}, {4, 2}};
    cout << "Center of the star graph in edges1: " << solution.findCenter(edges1) << endl;

    // Example 2: Star graph centered at 3
    vector<vector<int>> edges2 = {{3, 5}, {3, 1}, {3, 4}, {3, 2}};
    cout << "Center of the star graph in edges2: " << solution.findCenter(edges2) << endl;

    return 0;
}
