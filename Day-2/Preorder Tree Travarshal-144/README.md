***BST***
#### 1. **TreeNode Structure**:
   - A basic binary tree node class (`TreeNode`) is defined, containing:
     - `val`: the value of the node.
     - `left` and `right`: pointers to the left and right child nodes, respectively.

#### 2. **Solution Class**:
   - The `Solution` class contains two functions:
     - `preorder`: A recursive helper function to traverse the tree in **preorder** (root, left subtree, right subtree) and store the values in the `ans` vector.
     - `preorderTraversal`: Initializes an empty vector `ans` and calls the `preorder` function.

#### 3. **Main Function**:
   - A simple binary tree is manually created.
   - The `preorderTraversal` function is called on the `root` node.
   - The result, i.e., the preorder traversal of the tree, is printed to the console.

### Preorder Traversal:
- The preorder traversal visits nodes in the following order:
  1. Visit the root.
  2. Traverse the left subtree.
  3. Traverse the right subtree.