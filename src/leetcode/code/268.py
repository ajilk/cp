class Solution:
    def missingNumber(self, A: List[int]) -> int:
        n = len(A)
        actual = sum(A)
        expected = n * (n + 1) // 2
        return expected - actual
