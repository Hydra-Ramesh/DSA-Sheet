***Recursion***

1. **Include the current element**: 
   - `subset.push_back(arr[i])`: Adds the current element `arr[i]` to the subset.
   - `helper(i + 1, arr, n, subset, powerset)`: Moves to the next element `i + 1` and recursively builds all subsets that include the current element.

2. **Backtrack**: 
   - `subset.pop_back()`: Removes the last element (i.e., the element at index `i`) from the subset, so that you can explore the option of not including it.

3. **Skip Duplicates**:
   - `while (i + 1 < arr.size() && arr[i] == arr[i + 1]) i++;`: This loop skips all duplicate elements, ensuring that we don't create duplicate subsets. If `arr[i]` is equal to the next element `arr[i + 1]`, the index `i` is incremented to skip over duplicates.

4. **Exclude the current element**:
   - After skipping duplicates, `helper(i + 1, arr, n, subset, powerset)` is called again, this time excluding the current element, to generate all subsets that don't include `arr[i]`.