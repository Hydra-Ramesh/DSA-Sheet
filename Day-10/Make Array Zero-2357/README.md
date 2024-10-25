Here’s the logic in short:

1. **Objective**: Minimize operations to make all elements zero by choosing the smallest non-zero element \(x\) and subtracting it from all non-zero elements.

2. **Key Insight**: Each unique non-zero element in the array corresponds to one operation needed to make the array zero.

3. **Approach**:
   - Use a set to collect all unique non-zero elements from the array.
   - The number of unique elements in the set is the minimum number of operations required.
