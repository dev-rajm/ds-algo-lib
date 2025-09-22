#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int ci, sumi;
    cin >> ci >> sumi;

    int d = sumi / ci;
    int rem = sumi % ci;

    cout << rem * (d + 1) * (d + 1) + (ci - rem) * d * d << "\n";
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