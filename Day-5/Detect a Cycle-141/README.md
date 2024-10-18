The **Floyd’s Cycle Detection Algorithm** (Tortoise and Hare) checks if a linked list contains a cycle. It uses two pointers:
- **Slow pointer** moves one step at a time.
- **Fast pointer** moves two steps at a time.

If there's a cycle, both pointers will eventually meet. If the fast pointer reaches the end (`NULL`), there's no cycle.
**Main Steps**:
1. **Slow** moves 1 step, **Fast** moves 2 steps.
2. If they meet, there's a cycle.
3. If `fast` reaches the end, no cycle.

Efficient in time **O(n)** and space **O(1)**.