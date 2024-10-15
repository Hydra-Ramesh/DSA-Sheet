**Two Pointers**
1. **Sorting**: The input array is sorted to facilitate the elimination of duplicates and enable the use of the two-pointer technique.

2. **Nested Loops**: Two outer loops iterate over pairs of numbers:
   - The first loop selects the first number.
   - The second loop selects the second number.

3. **Two Pointers**: For each pair, two pointers (`lo` and `hi`) are used to find the remaining two numbers:
   - Start `lo` just after the second number and `hi` at the end of the array.
   - Calculate the sum of the four numbers.
   - If the sum matches the target, the quadruplet is recorded, and both pointers are adjusted to skip duplicates.
   - If the sum is less than the target, increment `lo` to increase the sum.
   - If the sum is greater, decrement `hi` to decrease the sum.

4. **Avoiding Duplicates**: The algorithm skips over duplicate numbers to ensure each quadruplet is unique.

This combination of sorting and the two-pointer technique efficiently finds the required quadruplets while minimizing time complexity to \(O(n^3)\).