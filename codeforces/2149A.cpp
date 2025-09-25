#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ng = 0, zw = 0;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num == -1)
            ng++;
        else if (num == 0)
            zw++;
        else
        {
        }
    }

    cout << (ng % 2 == 1 ? 2 + zw : zw) << "\n";
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