Here’s the concise logic for finding the minimum length of a subarray with a sum greater than or equal to `target`:

1. **Sliding Window**: Use two pointers, `i` (start) and `j` (end), to represent a sliding window over `nums`.
2. **Expand Window**: Move `j` to the right, adding `nums[j]` to `sum`.
3. **Shrink Window**: Whenever `sum >= target`, calculate the current window length (`j - i + 1`), update `minLen` with the smaller length, then move `i` right to try finding a smaller valid window.
4. **Return Result**: If `minLen` remains unchanged (no valid subarray found), return `0`; otherwise, return `minLen`.

This approach ensures we efficiently find the smallest valid subarray using **O(n)** time complexity.