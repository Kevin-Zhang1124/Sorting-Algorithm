# merge sort

def merge_two_lists(L1, L2):
    M = []
    while L1 != [] and L2 != []:
        if L1[0] < L2[0]:
            M.append(L1[0])
            L1 = L1[1:]
        else:
            M.append(L2[0])
            L2 = L2[1:]
    if L1 != []:
        M.extend(L1)
    if L2 != []:
        M.extend(L2)
    return M

def merge_sort(L):
    if len(L) <= 1:
        return L
    mid = len(L) // 2
    left = L[:mid]
    right = L[mid:]
    sorted_left = merge_sort(left)
    sorted_right = merge_sort(right)
    return merge_two_lists(sorted_left, sorted_right)
