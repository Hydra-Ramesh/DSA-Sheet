***Stack***
1. **Stack Usage**: It traverses `nums2` from right to left. For each element, it checks the top of the stack, which stores elements in a decreasing order. If the stack's top is smaller than the current element, it pops elements until it finds a greater one or becomes empty.
   
2. **Map Storage**: The next greater element for each number is stored in a hash map (`umap`). If no greater element is found, `-1` is stored.

3. **Result Construction**: For every element in `nums1`, the corresponding next greater element from the map is retrieved and pushed into the `ans` vector.

### Example Walkthrough:

1. **Initialization**:
   - Stack: Empty
   - Map: Empty
   - Iterate over `nums2` (right to left).

2. **Stack Operations**:
   - The stack helps to find the next greater element by maintaining an order where the top of the stack is the smallest valid next greater element.
   
3. **Hash Map**:
   - Stores the next greater element for each number in `nums2`. For example, if `nums2 = [4, 3, 2, 5]`, after the loop, it would store `{5: -1, 2: 5, 3: 5, 4: 5}`.

4. **Result Vector**:
   - After preprocessing `nums2`, the next greater element for each element in `nums1` is fetched from the map and returned as the result.