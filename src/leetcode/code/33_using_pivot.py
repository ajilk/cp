class Solution:
    def search(self, A: List[int], target: int) -> int:
        n = len(A)
        left, right = 0, n - 1

        while left < right:
            mid = left + (right - left) // 2
            if A[mid] > A[right]:
                left = mid + 1
            else:
                right = mid
        
        pivot = left
        
        if pivot == 0:
            left, right = 0, n - 1
        elif A[0] <= target <= A[pivot - 1]:
            left, right = 0, pivot - 1
        else:
            left, right = pivot, n - 1
        
        while left <= right:
            mid = left + (right - left) // 2
            if A[mid] < target:
                left = mid + 1
            elif A[mid] > target:
                right = mid - 1
            else:
                return mid

        return -1
