#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector<int> &nums)
{
    int n = nums.size(), ans = 0;
    vector<int> v(nums.begin(), nums.end());
    unordered_map<int, int> mp;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
        mp[nums[i]] = i;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != nums[i])
        {
            int prev_small_pos = mp[v[i]];
            mp[v[i]] = -1;
            mp[nums[i]] = prev_small_pos;
            ans++;
            swap(nums[prev_small_pos], nums[i]);
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 2, 1};
    cout << "Minimum swaps required: " << minSwaps(nums) << endl;
    return 0;
}
