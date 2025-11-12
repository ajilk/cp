from collections import deque
from typing import List, Optional


class TreeNode:
    def __init__(
        self,
        val: int,
        left: Optional["TreeNode"] = None,
        right: Optional["TreeNode"] = None,
    ):
        self.val = val
        self.left = left
        self.right = right


def bfs(root: TreeNode) -> List[int]:
    q = deque([root])
    result = []

    while q:
        count = len(q)
        level = []

        for _ in range(count):
            node = q.popleft()
            level.append(node.val)
            if node.left:
                q.append(node.left)
            if node.right:
                q.append(node.right)

        result.append(level)

    return result
