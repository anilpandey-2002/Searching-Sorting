vector<int> find(int arr[], int n, int x)
{
    int i = n, j = 0;
    bool flag = true;
    for (int k = 0; k < n; k++)
    {
        if (arr[k] == x)
        {
            i = min(i, k);
            j = max(j, k);
            flag = false;
        }
    }

    if (flag)
        return {-1, -1};

    return {i, j};
}
