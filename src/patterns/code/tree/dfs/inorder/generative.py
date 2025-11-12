def inorder(node: Optional[TreeNode]) -> Iterator[TreeNode]:
    if node:
        yield from inorder(node.left)
        yield node
        yield from inorder(node.right)
