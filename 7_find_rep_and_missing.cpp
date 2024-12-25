
int *findTwoElement(int *arr, int n)
{
    int cnt[n + 1];
    memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < n; i++)
    {
        cnt[arr[i]]++;
    }
    int *ans = new int[2];
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == 0)
            ans[1] = i;
        if (cnt[i] == 2)
            ans[0] = i;
    }

    return ans;
}
