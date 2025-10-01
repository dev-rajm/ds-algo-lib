#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << 1;
    for (int i = 0; i < (a - 1); i++)
    {
        cout << 0;
    }
    cout << " ";
    for (int i = 0; i < (b - c + 1); i++)
    {
        cout << 1;
    }
    for (int i = 0; i < (c - 1); i++)
    {
        cout << 0;
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