**In Order Travarse**
1. Perform an **in-order traversal** (left-root-right) to visit nodes in ascending order.
2. Use a helper function `help` to recursively traverse the tree, starting from the left subtree.
3. Increment an index `idx` each time a node is visited.
4. When `idx` equals `k`, store the current node's value as the k-th smallest element.
5. Return the stored value after completing the traversal or finding the k-th smallest element.