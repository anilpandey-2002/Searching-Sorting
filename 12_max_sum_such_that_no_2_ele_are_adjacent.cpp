public
int FindMaxSum(int arr[], int n)
{
    if (n < 2)
        return arr[0];

    int max = 0, prev1 = arr[0], prev2 = Math.max(arr[1], arr[0]);
    for (int i = 2; i < n; i++)
    {
        int sum = prev1 + arr[i];
        max = Math.max(sum, prev2);
        prev1 = prev2;
        prev2 = max;
    }
    if (max == 0)
        max = Math.max(prev1, prev2);
    return max;
}