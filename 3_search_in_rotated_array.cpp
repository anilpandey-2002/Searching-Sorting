
int search(vector<int> &nums, int target)
{
    int size = nums.size();
    auto i = nums.begin();
    i = min_element(nums.begin(), nums.end());

    int pos = i - nums.begin();
    int l = 0;
    int r = size - 1;

    if (target == nums[r])
        return r;
    if (target > nums[r])
        r = pos - 1;
    else
        l = pos;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (target == nums[mid])
            return mid;
        if (target < nums[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
