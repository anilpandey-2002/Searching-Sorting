#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int q;
    cin >> q;
    while (q--)
    {
        int pow, sum = 0, count = 0;
        cin >> pow;
        for (int i = 0; i < n; i++)
            if (arr[i] <= pow)
                sum += arr[i], count++;
        cout << count << " " << sum << endl;
    }
    return 0;
}
