#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int ans;  // Variable to store the k-th smallest value

    // Helper function for in-order traversal (left-root-right)
    void help(TreeNode* root, int k, int &idx) {
        if (root == NULL) return;  // Base case: if root is null, return

        // First, recurse on the left subtree (smaller elements)
        help(root->left, k, idx);

        // Visit the current node
        idx++;
        if (idx == k) {
            ans = root->val;  // If idx matches k, we've found the k-th smallest element
            return;
        }

        // Then, recurse on the right subtree (larger elements)
        help(root->right, k, idx);
    }

    int kthSmallest(TreeNode* root, int k) {
        int idx = 0;  // Initialize the index counter to 0
        ans = -1;     // Initialize the answer to -1 (in case it's not found)
        help(root, k, idx);  // Start the in-order traversal
        return ans;    // Return the k-th smallest value
    }
};

// Helper function to insert nodes in the BST
TreeNode* insert(TreeNode* root, int val) {
    if (root == NULL) return new TreeNode(val);
    if (val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

// Main function to test the kthSmallest function
int main() {
    // Create a binary search tree (BST)
    TreeNode* root = NULL;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 6);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 1);

    // Create a Solution object
    Solution sol;

    // Find and print the 3rd smallest element
    int k = 3;
    cout << "The " << k << "-th smallest element is: " << sol.kthSmallest(root, k) << endl;

    return 0;
}
