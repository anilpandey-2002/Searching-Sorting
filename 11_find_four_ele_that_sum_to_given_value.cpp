
vector<vector<int>> find4Numbers(vector<int> &A, int n, int X)
{
    int l, r;
    vector<vector<int>> ans;
    set<vector<int>> sett;

    sort(A.begin(), A.end());

    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            l = j + 1;
            r = n - 1;
            while (l < r)
            {
                if (A[i] + A[j] + A[l] + A[r] == X)
                {
                    sett.insert({A[i], A[j], A[l], A[r]});
                    l++;
                    r--;
                }
                else if (A[i] + A[j] + A[l] + A[r] < X)
                    l++;
                else
                    r--;
            }
        }
    }
    for (vector<int> v : sett)
        ans.push_back(v);
    return ans;
}
