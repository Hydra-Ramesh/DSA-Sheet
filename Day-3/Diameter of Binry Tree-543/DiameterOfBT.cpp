#include <iostream>
#include <algorithm> // for std::max
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDia = 0;
    
    // Helper function to compute the height of the tree
    int level(TreeNode* root) {
        if (root == NULL) return 0;
        return 1 + max(level(root->left), level(root->right));
    }
    
    // Main function to compute the diameter of the binary tree
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) return 0;
        int dia = level(root->left) + level(root->right);
        maxDia = max(dia, maxDia);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxDia;
    }
};

// Function to create a test tree and call the Solution
int main() {
    // Creating a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Creating a Solution object
    Solution sol;
    
    // Calculating the diameter
    int diameter = sol.diameterOfBinaryTree(root);
    
    // Outputting the result
    cout << "The diameter of the binary tree is: " << diameter << endl;
    
    return 0;
}
