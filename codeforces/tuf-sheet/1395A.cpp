#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c, int d)
{
    if ((a % 2) + (b % 2) + (c % 2) + (d % 2) > 1)
    {
        return false;
    }
    return true;
}

void solve()
{
    long long r, g, b, w;
    cin >> r >> g >> b >> w;

    if (check(r, g, b, w))
    {
        cout << "YES";
    }
    else if (r > 0 && g > 0 && b > 0 && check(r - 1, g - 1, b - 1, w + 3))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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