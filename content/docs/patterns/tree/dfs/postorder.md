---
title: Postorder
---


#### generative

```python
def postorder(node: Optional[TreeNode]) -> Iterator[TreeNode]:
    if node:
        yield from postorder(node.left)
        yield from postorder(node.right)
        yield node

```

#### recursive

```python
def postorder(node: Optional[TreeNode]) -> List[TreeNode]:
    if not node:
        return []

    left = postorder(node.left)
    right = postorder(node.right)

    return left + right + [node]

```

#### iterative

```python
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

```
