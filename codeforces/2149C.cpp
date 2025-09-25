#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> freq(n + 1, 0);
    for (int x : arr)
    {
        if (0 <= x && x <= n)
            freq[x]++;
    }

    // compute current mex
    int mex = 0;
    while (mex <= n && freq[mex] > 0)
        ++mex;

    if (mex == k)
    {
        cout << 0 << "\n";
        return;
    }

    if (mex > k)
    {
        cout << freq[k] << "\n";
    }
    else
    {
        int missing = 0;
        for (int i = 0; i < k; ++i)
        {
            if (freq[i] == 0)
                ++missing;
        }
        cout << max(missing, freq[k]) << "\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
