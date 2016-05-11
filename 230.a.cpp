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
    void Order(TreeNode* root, int k, int& n, int& result) {
        if (root == NULL) {
            return;
        }
        Order(root->left, k, n, result);
        if (n == k-1) {
            result = root->val;
            n = n + 1;
        } else if (n < k-1) {
            int m = n + 1;
            Order(root->right, k, m, result);
            n = m;
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        int n = 0;
        int result = 0;
        Order(root, k, n, result);
        return result;
    }
};
