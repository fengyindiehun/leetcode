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

    void getMin(TreeNode* root, int& min) {
        if (root == NULL) return;
        if (root->left != NULL) {
            getMin(root->left, min);
            return;
        }
        min = root->val;
    }

    void getMax(TreeNode* root, int& max) {
        if (root == NULL) return;
        if (root->right != NULL) {
            getMax(root->right, max);
            return;
        }
        max = root->val;
    }
    bool isValidBST(TreeNode* root) {
        if (root == NULL) return true;
        int min_right;
        int max_left;
        bool is_valid = true;
        if (root->left != NULL) {
            getMax(root->left, max_left);
            is_valid = is_valid && (max_left < root->val);
        }
        if (root->right != NULL) {
            getMin(root->right, min_right);
            is_valid = is_valid && (root->val < min_right);
        }
        return isValidBST(root->left) && isValidBST(root->right) && is_valid;
    }
};
