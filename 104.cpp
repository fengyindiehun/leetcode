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
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int max_depth_left = maxDepth(root->left);
        int max_depth_right = maxDepth(root->right);
        return 1 + (max_depth_left >= max_depth_right ? max_depth_left : max_depth_right);
    }
};
