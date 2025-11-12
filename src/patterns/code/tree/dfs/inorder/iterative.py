def inorder(node: TreeNode) -> List[TreeNode]:
    stack = []
    result = []

    while node or stack:
        while node:
            stack.append(node)
            node = node.left
        node = stack.pop()
        result.append(node)
        node = node.right

    return result
