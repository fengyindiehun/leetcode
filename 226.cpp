/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return NULL;
        struct TreeNode* left_tmp = invertTree(root->right);
        struct TreeNode* right_tmp = invertTree(root->left);
        root->left = left_tmp;
        root->right = right_tmp;
        return root;
    }
};
