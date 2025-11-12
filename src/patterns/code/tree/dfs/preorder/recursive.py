def preorder(node: Optional[TreeNode]) -> List:
    if not node:
        return []

    left = preorder(node.left)
    right = preorder(node.right)

    return [node.val] + left + right
