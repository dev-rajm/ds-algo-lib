#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long ma = a[0];
    long long ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (i & 1)
        {
            a[i] = max(a[i], ma);
        }
        ma = max(a[i], ma);
    }

    for (int i = 0; i < n; i += 2)
    {
        long long mi = LLONG_MAX;
        if (i - 1 > 0)
        {
            mi = min(a[i - 1], mi);
        }
        if (i + 1 < n)
        {
            mi = min(a[i + 1], mi);
        }
        if (mi <= a[i])
        {
            ans += a[i] - mi + 1;
        }
    }

    cout << ans << "\n";
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