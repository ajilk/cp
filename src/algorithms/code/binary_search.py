def bs(A: List[int], target: int) -> None:
    n = len(A)
    left, right = 0, n - 1

    while left <= right:
        mid = left + (right - left) // 2
        if A[mid] < target:
            left = mid + 1
        elif A[mid] > target:
            right = mid - 1
        else:
            return mid

    return -1
