# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0
        #max_depth_left = self.maxDepth(root.left)
        #max_depth_right = self.maxDepth(root.right)
        #return 1 + (max_depth_left if max_depth_left >= max_depth_right else max_depth_right)
        return 1 + max(self.maxDepth(root.left), self.maxDepth(root.right))
