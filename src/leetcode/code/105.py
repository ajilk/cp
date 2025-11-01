class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        n = len(preorder)
        q = deque(preorder)
        hm = {v: i for i, v in enumerate(inorder)}

        def build(start: int, end: int) -> Optional[TreeNode]:
            if start > end:
                return None

            value = q.popleft()
            idx = hm[value]

            return TreeNode(value, build(start, idx - 1), build(idx + 1, end))

        return build(0, n - 1)
