
vector<long long int> productExceptSelf(vector<long long int> &arr, int n)
{

    lli prod = 1;
    vector<lli> ans;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            prod *= arr[i];
        else
            cnt++;
    }
    if (cnt >= 2)
    {
        for (int i = 0; i < n; i++)
        {
            ans.push_back(0);
        }
    }
    else if (cnt == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                ans.push_back(prod);
            else
                ans.push_back(0);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            ans.push_back(prod / arr[i]);
        }
    }

    return ans;
}
