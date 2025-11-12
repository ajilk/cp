class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def inorder(node: Optional[TreeNode]) -> Iterator[int]:
            if node:
                yield from inorder(node.left)
                yield node.val
                yield from inorder(node.right)

        return all(a < b for a, b in pairwise(inorder(root)))
