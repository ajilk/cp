---
title: Preorder
---


#### generative

```python
def preorder(node: Optional[TreeNode]) -> Iterator[TreeNode]:
    if node:
        yield node
        yield from preorder(node.left)
        yield from preorder(node.right)

```

#### recursive

```python
def preorder(node: Optional[TreeNode]) -> List:
    if not node:
        return []

    left = preorder(node.left)
    right = preorder(node.right)

    return [node.val] + left + right

```

#### iterative

```python
def preorder(node: Optional[TreeNode]) -> List[TreeNode]:
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

```
