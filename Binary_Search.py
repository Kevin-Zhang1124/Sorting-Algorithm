# return True if k is in L, False otherwise

# binary search (recursion)

def binary_search_recursive(L, k):
    if L == []:
        return False
    mid = len(L) // 2
    if L[mid] == k:
        return True
    elif L[mid] < k:
        return binary_search_recursive(L[mid + 1:], k)
    else:
        return binary_search_recursive(L[:mid], k)


# binary search (Loop)
def binary_search_helper(L, k):
    start = 0
    end = len(L) - 1
    while start <= end:
        mid = (start + end) // 2
        if L[mid] == k:
            return True
        elif L[mid] < k:
            start = mid + 1
        else:
            end = mid - 1
    return False
  
