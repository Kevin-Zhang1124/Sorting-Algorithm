#include "stdio.h"
#include <assert.h>


// Choose the element at index 'left' to be the pivot
// Put all elements less than arr[left] on the left side
// Finally, put the pivot element on the right position, return the index of the pivot

int mutateArray(int* arr, int left, int right) {
    int pivot = arr[left];
    int pos = left + 1;
    for (int i = left + 1; i <= right; i++) {
        if (arr[i] < pivot) {
            int temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
            pos += 1;
        }
    }
    int temp_2 = arr[left];
    arr[left] = arr[pos - 1];
    arr[pos - 1] = temp_2;
    return pos - 1;
}


void quick_sort_internal(int* arr, int left, int right) {
    // base case
    if (left >= right) {
        return;
    }
    int pos = mutateArray(arr, left, right);
    quick_sort_internal(arr, left, pos - 1); // recursion on the left side
    quick_sort_internal(arr, pos + 1, right); // recursion on the right side
}


void quick_sort(int * arr, const int len) {
    quick_sort_internal(arr, 0, len - 1);
}
