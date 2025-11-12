class Solution:
    def isValidBST(
        self, node: Optional[TreeNode], low: int = -inf, high: int = inf
    ) -> bool:
        if not node:
            return True

        if node.val <= low or node.val >= high:
            return False

        return self.isValidBST(node.left, low, node.val) and self.isValidBST(
            node.right, node.val, high
        )
