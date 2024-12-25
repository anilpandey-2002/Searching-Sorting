int peakElement(int arr[], int low, int high, int lowerBound, int upperBound)
{
    int mid = low + (high - low) / 2;
    if (mid == lowerBound)
        return (mid == upperBound || arr[mid] >= arr[mid + 1]) ? mid : -1;
    if (mid == upperBound)
        return (arr[mid] >= arr[mid - 1]) ? mid : -1;
    if (arr[mid] >= arr[mid + 1] && arr[mid] >= arr[mid - 1])
        return mid;
    return (arr[mid] > arr[high]) ? peakElement(arr, mid + 1, high, lowerBound, upperBound) : peakElement(arr, low, mid - 1, lowerBound, upperBound);
}

int peakElement(int arr[], int low, int high)
{
    int mid = low + (high - low) / 2;
    if (arr[mid] == arr[high])
        return mid;
    return (arr[mid] > arr[high]) ? peakElement(arr, mid, high) : peakElement(arr, low, mid - 1);
}
