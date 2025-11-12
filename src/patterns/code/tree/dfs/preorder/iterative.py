def preorder(node: TreeNode) -> List[TreeNode]:
    stack = []
    result = []

    while stack or node:
        while node:
            result.append(node)
            stack.append(node)
            node = node.left
        node = stack.pop()
        node = node.right

    return result
