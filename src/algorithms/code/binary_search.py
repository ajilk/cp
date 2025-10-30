while left <= right:
    mid = left + (right - left) // 2
    if A[mid] < target:
        left = mid + 1
    elif A[mid] > target:
        right = mid - 1
    else:
        return mid
