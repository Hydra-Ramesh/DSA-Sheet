#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Helper DFS function to perform flood fill
    void dfs(vector<vector<int>>& image, int currRow, int currCol, int initColor, int newColor) {
        int n = image.size();
        int m = image[0].size();

        // Check for out-of-bounds indices or cells that do not match the initial color
        if (currRow < 0 || currCol < 0 || currRow >= n || currCol >= m) return;
        if (image[currRow][currCol] != initColor) return;

        // Fill the current cell with the new color
        image[currRow][currCol] = newColor;

        // Recursive calls in all four directions
        dfs(image, currRow + 1, currCol, initColor, newColor);
        dfs(image, currRow - 1, currCol, initColor, newColor);
        dfs(image, currRow, currCol + 1, initColor, newColor);
        dfs(image, currRow, currCol - 1, initColor, newColor);
    }

    // Main function to execute flood fill
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initColor = image[sr][sc];
        
        // Only proceed if the initial color is different from the new color
        if (initColor != color) {
            dfs(image, sr, sc, initColor, color);
        }

        return image;
    }
};

int main() {
    Solution solution;

    // Sample 2D image
    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };

    // Starting point and new color
    int sr = 1, sc = 1, newColor = 2;

    // Print original image
    cout << "Original Image:" << endl;
    for (const auto& row : image) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }

    // Perform flood fill
    vector<vector<int>> result = solution.floodFill(image, sr, sc, newColor);

    // Print modified image
    cout << "\nFlood Filled Image:" << endl;
    for (const auto& row : result) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }

    return 0;
}
