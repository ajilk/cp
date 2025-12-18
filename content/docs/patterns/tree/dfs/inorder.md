---
title: Inorder
---


#### generative

```python
def inorder(node: Optional[TreeNode]) -> Iterator[TreeNode]:
    if node:
        yield from inorder(node.left)
        yield node
        yield from inorder(node.right)

```

#### recursive

```python
def inorder(node: Optional[TreeNode]) -> List[TreeNode]:
    if not node:
        return []

    left = inorder(node.left)
    right = inorder(node.right)

    return left + [node] + right

```

#### iterative

```python
def inorder(node: Optional[TreeNode]) -> List[TreeNode]:
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

```
