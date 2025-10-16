#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    long long m1 = (x + y) * a;
    long long m2 = min(x, y) * b + (max(x, y) - min(x, y)) * a;

    cout << min(m1, m2) << "\n";
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