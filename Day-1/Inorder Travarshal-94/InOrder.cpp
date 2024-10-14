#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    // Helper function for inorder traversal
    void inorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;  // Base case: if node is NULL, return
        inorder(root->left, ans);  // Traverse left subtree
        ans.push_back(root->val);  // Visit current node
        inorder(root->right, ans); // Traverse right subtree
    }

    // Main function to return inorder traversal as a vector
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;           // Vector to store the result
        inorder(root, ans);        // Call helper function to perform traversal
        return ans;                // Return the result vector
    }
};

int main() {
    Solution sol;

    // Constructing a binary search tree
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);

    // Perform inorder traversal and get the result as a vector
    vector<int> result = sol.inorderTraversal(root);

    // Output the result
    cout << "Inorder traversal of the binary tree: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
