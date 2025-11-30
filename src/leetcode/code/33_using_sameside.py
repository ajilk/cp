class Solution:
    def search(self, A: List[int], target: int) -> int:
        n = len(A)
        left, right = 0, n - 1

        while left <= right:
            mid = left + (right - left) // 2
            
            sameside = (A[0] > A[mid]) == (A[0] > target)
            if sameside:
                v = A[mid]
            else:
                v = -inf if target < A[mid] else inf
            
            if v < target:
                left = mid + 1
            elif v > target:
                right = mid - 1
            else:
                return mid

        return -1
