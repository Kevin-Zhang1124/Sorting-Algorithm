# selection sort 

def selection_sort(L):
    n = len(L)
    for i in range(n - 1):
        min_pos = i
        for j in range(i + 1, n):
            if L[j] < L[min_pos]:
                min_pos = j
        temp = L[i]
        L[i] = L[min_pos]
        L[min_pos] = temp
    return L
