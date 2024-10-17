**Back Tracking**
### Logic Overview for Sudoku Solver:

1. **Input Representation**:
   - The Sudoku board is represented as a 2D vector of characters (`vector<vector<char>>`), where:
     - Numbers '1' to '9' represent filled cells.
     - '.' represents empty cells.

2. **Safety Check (`isSafe` function)**:
   - **Row Check**: Ensure the number is not already present in the same row.
   - **Column Check**: Ensure the number is not already present in the same column.
   - **3x3 Sub-grid Check**: Ensure the number is not already present in the corresponding 3x3 sub-grid.

3. **Backtracking (`solve` function)**:
   - **Base Case**: If all rows are processed (`r == 9`), return `true` (solved).
   - **Move to Next Row**: If the column exceeds 8, move to the next row and reset the column to 0.
   - **Skip Filled Cells**: If the current cell is already filled, move to the next column.
   - **Try Numbers (1-9)**:
     - For each number, check if it's safe to place using `isSafe`.
     - If safe, place the number and recursively call `solve` for the next cell.
     - If placing the number leads to a solution, return `true`.
     - If not, backtrack by resetting the cell to `'.'` and continue trying other numbers.

4. **Main Function**:
   - Start the solving process from the top-left cell (0, 0).

### Summary
The algorithm uses backtracking to explore all possible placements of numbers in empty cells while ensuring Sudoku rules are maintained. If a placement leads to a dead end, it backtracks and tries the next number. The process continues until the board is completely solved.