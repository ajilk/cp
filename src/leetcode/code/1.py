class Solution:
    def twoSum(self, A: List[int], target: int) -> List[int]:
        seen = {}

        for i, v in enumerate(A):
            need = target - v
            if need in seen:
                return [seen[need], i]
            seen[v] = i

        return []
