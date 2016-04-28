# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution(object):
    def invertTree(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        if root is None:
            return None
        left_tmp = self.invertTree(root.right)
        right_tmp = self.invertTree(root.left)
        root.left = left_tmp
        root.right = right_tmp
        return root

