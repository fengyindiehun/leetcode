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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        result.resize(0);
        if (root == NULL) return result;
        result.push_back(root->val);
        vector<int> left = rightSideView(root->left);
        vector<int> right = rightSideView(root->right);
        for (vector<int>::iterator iter = right.begin(); iter != right.end(); ++iter) {
            result.push_back(*iter);
        }
        if (left.size() > right.size()) {
            for (int i = right.size(); i < left.size(); ++i) {
                result.push_back(left[i]);
            }
        }
        return result;
    }
};
