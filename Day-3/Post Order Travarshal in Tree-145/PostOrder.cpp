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
    // Helper function to perform postorder traversal
    void postorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;
        postorder(root->left, ans);   // Visit left subtree
        postorder(root->right, ans);  // Visit right subtree
        ans.push_back(root->val);     // Visit root
    }
    
    // Main function to return postorder traversal
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root, ans);
        return ans;
    }
};

int main() {
    // Create a sample binary tree:
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Create a Solution object
    Solution sol;

    // Get postorder traversal of the tree
    vector<int> result = sol.postorderTraversal(root);

    // Print the result
    cout << "Postorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
