def postorder(node: Optional[TreeNode]) -> Iterator[TreeNode]:
    if node:
        yield from postorder(node.left)
        yield from postorder(node.right)
        yield node
