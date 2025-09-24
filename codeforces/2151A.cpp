#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &a)
{
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] != a[i - 1] + 1)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> ls(m);
    for (int i = 0; i < m; i++)
    {
        cin >> ls[i];
    }

    if (check(ls))
    {
        cout << n - ls.back() + 1;
    }
    else
    {
        cout << 1;
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