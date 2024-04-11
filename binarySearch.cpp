//implement binary search to find an element in a sorted array
int binarySearch(int arr[], int low, int high, int target) {
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = 5;
    int target = 2;
    int result = binarySearch(arr, 0, n-1, target);
    (result != -1) ? cout<<"Element found at index "<<result : cout<<"Element not found";
    return 0;
}