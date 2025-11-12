def preorder(node: TreeNode) -> Iterator[TreeNode]:
    if node:
        yield node
        yield from preorder(node.left)
        yield from preorder(node.right)
