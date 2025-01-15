# insertion sort

def insertion_sort(L):
    n = len(L)
    for i in range(1, n):
        pos = i
        while pos > 0 and L[pos] < L[pos - 1]:
            temp = L[pos]
            L[pos] = L[pos - 1]
            L[pos - 1] = temp
            pos = pos - 1
    return L
