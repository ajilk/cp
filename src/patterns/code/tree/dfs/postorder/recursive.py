def postorder(node: Optional[TreeNode]) -> List[TreeNode]:
    if not node:
        return []

    left = postorder(node.left)
    right = postorder(node.right)

    return left + right + [node]
