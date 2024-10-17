#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Function to check if placing num at (r, c) is safe
    bool isSafe(vector<vector<char>>& board, int r, int c, int num) {
        // Check row
        for (int i = 0; i < 9; i++) {
            if (board[r][i] - '0' == num) return false;
        }
        // Check column
        for (int i = 0; i < 9; i++) {
            if (board[i][c] - '0' == num) return false;
        }
        // Check 3x3 sub-grid
        int x = (r / 3) * 3;
        int y = (c / 3) * 3;
        for (int i = x; i < x + 3; i++) {
            for (int j = y; j < y + 3; j++) {
                if (board[i][j] - '0' == num) return false;
            }
        }
        return true;
    }

    // Backtracking function to solve the Sudoku
    bool solve(vector<vector<char>>& board, int r, int c) {
        if (r == 9) return true;  // If all rows are processed, puzzle is solved
        if (c == 9) return solve(board, r + 1, 0);  // Move to next row
        if (board[r][c] != '.') return solve(board, r, c + 1);  // Skip filled cells

        // Try placing numbers from 1 to 9
        for (int num = 1; num <= 9; num++) {
            if (isSafe(board, r, c, num)) {
                board[r][c] = '0' + num;  // Place the number

                if (solve(board, r, c + 1)) return true;  // Recur for next cell

                board[r][c] = '.';  // Backtrack if no valid number is found
            }
        }
        return false;  // Trigger backtracking
    }

    // Function to initiate the solving process
    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);  // Start solving from the top-left cell (0, 0)
    }
};

// Function to print the Sudoku board
void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (const auto& cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

int main() {
    // Sample Sudoku puzzle (0 represents empty cells)
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    Solution solution;
    solution.solveSudoku(board);  // Solve the Sudoku

    cout << "Solved Sudoku board:" << endl;
    printBoard(board);  // Print the solved board

    return 0;
}
