#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long maxDiff = LONG_LONG_MIN;
    for (int i = 1; i < n; i += 2)
    {
        maxDiff = max(a[i] - a[i - 1], maxDiff);
    }
    cout << maxDiff << "\n";
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