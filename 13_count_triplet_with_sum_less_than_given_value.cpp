#include <bits/stdc++.h>
using namespace std;

int countTriplets(int arr[], int n, int sum)
{
    sort(arr, arr + n);
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] >= sum)
                k--;
            else
            {
                ans += (k - j);
                j++;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {5, 1, 3, 4, 7}, sum = 12;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Count of triplets: " << countTriplets(arr, n, sum);
    return 0;
}
