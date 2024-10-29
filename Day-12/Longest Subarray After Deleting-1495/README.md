Here’s the short logic:

1. **Sliding Window**: Use two pointers, `i` (start) and `j` (end), to form a sliding window over `nums`.
2. **Count `0`s (Flips)**: Move `j` to expand the window. If you encounter a `0`, increment `flips`.
3. **Adjust Window If Exceeding One `0`**: If `flips` exceeds 1, move `i` to the right until `flips` is back to 1 or less, ensuring the window contains at most one `0`.
4. **Track Longest Valid Subarray**: Each time the window is valid (contains at most one `0`), update `maxLen`.
5. **Result**: Return `maxLen - 1` because we’re effectively deleting one element.