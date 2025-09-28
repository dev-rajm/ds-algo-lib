#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    if (x == 0 && y == 0)
    {
        cout << 0;
    }
    else if (x == y)
    {
        cout << x * b;
    }
    else if (x < y)
    {
        cout << (x * b) + (y - x) * a;
    }
    else
    {
        cout << (y * b) + (x - y) * a;
    }
    cout << "\n";
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