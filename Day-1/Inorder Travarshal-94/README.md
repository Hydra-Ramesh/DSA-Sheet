***BST***
1. **Inorder Traversal Function (`inorder`)**:
   - This is a helper function that performs recursive inorder traversal.
   - If the current node (`root`) is `NULL`, the function returns without doing anything (base case).
   - It recursively visits the left subtree (`inorder(root->left, ans)`), adds the current node's value to the `ans` vector (`ans.push_back(root->val)`), and then recursively visits the right subtree (`inorder(root->right, ans)`).

2. **`inorderTraversal` Function**:
   - This is the main function that initializes an empty vector `ans` to store the result of the inorder traversal.
   - It calls the helper function `inorder` to perform the recursive traversal.
   - Finally, it returns the vector `ans`, which contains the inorder sequence of node values.