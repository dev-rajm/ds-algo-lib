#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    int d = n / k;

    int a1 = min(d, m);
    int a2 = (m - a1 + k - 2) / (k - 1);

    cout << a1 - a2 << "\n";
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