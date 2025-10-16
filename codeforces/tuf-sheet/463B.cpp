#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, p;
    cin >> n;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (p > maxi)
        {
            maxi = p;
        }
    }
    cout << maxi;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}