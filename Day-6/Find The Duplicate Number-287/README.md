**Array**
### Concept:
1. **Sorting the Array**: You first sort the array in ascending order.
2. **Checking Adjacent Elements**: After sorting, you check adjacent elements in the array. If two consecutive elements are equal, you return that element as the duplicate.
3. **Return Value**: If no duplicates are found, the function returns `-1`.

### Time and Space Complexity:
- **Time Complexity**: \(O(n \log n)\) due to sorting.
- **Space Complexity**: \(O(1)\) since the sorting is done in-place and no extra space is used except for loop variables.

This approach relies on sorting the array to easily identify duplicates by checking adjacent elements.