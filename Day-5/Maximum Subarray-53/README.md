### Logic for `maxSubArray` Function:

The `maxSubArray` function uses **Kadane's Algorithm** to find the contiguous subarray (with at least one element) that has the largest sum. The algorithm operates in linear time, making it very efficient.

### Steps and Logic:

1. **Initialization**:
   - Start by initializing two variables:
     - `max_current`: Tracks the maximum sum of the subarray that ends at the current element.
     - `max_global`: Tracks the maximum sum found so far across all subarrays.

   Both are initialized to the first element of the array (`nums[0]`), because a subarray must contain at least one element.

2. **Iterate Through the Array**:
   - Starting from the second element (`i = 1`), iterate through the array.
   - At each step, update `max_current` to be either:
     - `nums[i]` (the current element by itself), or
     - `max_current + nums[i]` (extend the current subarray by including the current element).
   - This step decides whether it's better to start a new subarray or continue extending the current subarray.

3. **Update the Global Maximum**:
   - If `max_current` is greater than `max_global`, update `max_global` to `max_current`.

4. **Return the Result**:
   - After iterating through the entire array, `max_global` will hold the maximum sum of any contiguous subarray.