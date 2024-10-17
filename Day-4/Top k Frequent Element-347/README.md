**Priority Queue**
### Key Logic of the Code

1. **Frequency Count**:
   - You use an unordered map `mp` to count the frequency of each element in `nums`.
   - This map stores the element as the key and the frequency as the value.

2. **Min-Heap (Priority Queue)**:
   - You use a priority queue (`pq`) to store pairs of `{frequency, element}`.
   - This is a **min-heap** because you are using `greater<pi>`. The priority queue will always have the least frequent element at the top.
   - As you iterate through the map, you push each element and its frequency into the heap.
   - If the heap size exceeds `k`, you pop the smallest frequency element, ensuring that the heap only holds the top `k` elements with the highest frequency.

3. **Extracting Top k Frequent Elements**:
   - After filling the priority queue, the heap contains the `k` most frequent elements. You extract these elements into the result vector `ans` by popping from the heap.
   - The element is stored as the second value in the heap pairs (`pq.top().second`), so you correctly push that into `ans`.
