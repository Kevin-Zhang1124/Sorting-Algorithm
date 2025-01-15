// Selection Sort: best case: O(n^2)
//                 worst case: O(n^2)
// mutate array

void selection_sort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {  // only need to loop from the very first element to the second last element
        int min_pos = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < arr[min_pos] {
                min_pos = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_pos];
        arr[min_pos] = temp;
    }
}
