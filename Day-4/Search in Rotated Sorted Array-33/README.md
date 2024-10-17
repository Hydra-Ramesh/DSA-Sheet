**Binary Search with Rotation**
### Logic Explanation

1. **Initialization**:
   - Start with two pointers, `l` (left) and `r` (right), which represent the bounds of the search space. Initialize `l` to `0` and `r` to `nums.size() - 1`.

2. **Binary Search Loop**:
   - Continue looping while `l` is less than or equal to `r`.
   - Calculate the midpoint `m` using the formula:
     ```cpp
     int m = l + (r - l) / 2;
     ```

3. **Check Midpoint**:
   - If the element at index `m` (`nums[m]`) equals the target, return `m` (the index of the target).

4. **Determine Sorted Half**:
   - Check if the left half (`nums[l]` to `nums[m]`) is sorted:
     - If `nums[l] <= nums[m]`, it means the left half is sorted.
       - Check if the target is within this range:
         - If `nums[l] <= target < nums[m]`, narrow the search to the left half by setting `r = m - 1`.
         - Otherwise, search the right half by setting `l = m + 1`.
   - If the left half is not sorted, then the right half must be sorted:
     - Check if the target is within the sorted right half:
       - If `nums[m] < target <= nums[r]`, narrow the search to the right half by setting `l = m + 1`.
       - Otherwise, search the left half by setting `r = m - 1`.

5. **End Condition**:
   - If the target is not found after the loop ends, return `-1`.
