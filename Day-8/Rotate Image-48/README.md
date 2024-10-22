The logic for rotating an \(n \times n\) matrix by 90 degrees clockwise can be broken down into two simple steps:

1. **Transpose the matrix:**
   - Convert rows into columns by swapping elements `matrix[i][j]` with `matrix[j][i]` for \(i < j\).
   - This swaps elements across the diagonal of the matrix.

2. **Reverse each row:**
   - For each row in the transposed matrix, reverse the elements.
   - This completes the 90-degree clockwise rotation.

These two operations transform the matrix in place without needing extra space (except for temporary variables during swaps).