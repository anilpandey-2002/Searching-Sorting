#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll findSubarray(vector<ll> arr, int n)
{
    ll sum = 0, counter = 0;
    unordered_map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0)
            counter++;
        if (mp.count(sum))
            counter += mp[sum];
        mp[sum]++;
    }
    return counter;
}

int main()
{
    vector<ll> arr = {6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7};
    int n = arr.size();
    cout << "Count of zero-sum subarrays: " << findSubarray(arr, n);
    return 0;
}
