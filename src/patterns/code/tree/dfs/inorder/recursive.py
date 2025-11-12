def inorder(node: Optional[TreeNode]) -> List[TreeNode]:
    if not node:
        return []

    left = inorder(node.left)
    right = inorder(node.right)

    return left + [node] + right
