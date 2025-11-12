def postorder(node: Optional[TreeNode]) -> List[TreeNode]:
    stack = [(root, False)]
    result = []

    while stack:
        node, processed = stack.pop()
        if node:
            if processed:
                result.append(node)
            else:
                stack.append([node, True])
                stack.append([node.right, False])
                stack.append([node.left, False])

    return result
