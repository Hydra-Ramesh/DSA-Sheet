Here’s a concise explanation of the logic for generating Pascal's Triangle:

1. **Triangle Structure**: 
   - Each row starts and ends with `1`.
   - Every other value is the sum of the two values directly above it in the previous row.

2. **Algorithm**:
   - Initialize an empty 2D vector `v` to store the triangle.
   - For each row `i`:
     - Create a new vector of size `i+1` to represent that row.
     - Set the first and last elements to `1`.
     - For the rest of the elements, set each element as the sum of the two elements directly above it: `v[i-1][j-1] + v[i-1][j]`.
   - Repeat this for all rows.
