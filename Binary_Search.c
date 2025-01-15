// return the index of the target element
// return -1 if the target element is not found

int binary_search(const int target, const int a[], const int len) {
    int left = 0;
    int right = len - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == target) {
            return mid;
        } else if (target < a[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}
