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
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int min_left = minDepth(root->left);
        int min_right = minDepth(root->right);
        int min;
        if (min_left <= min_right) {
            if (min_left != 0) {
                min = min_left;
            } else {
                min = min_right;
            }
        } else {
            if (min_right != 0) {
                min = min_right;
            } else {
                min = min_left;
            }
        }
        return 1+ min;
    }
};
