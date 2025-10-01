#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << "No\n";
    }
    else
    {
        int t = (n * (n + 1)) / 2;
        int k = ceil((double)n / (double)2);
        cout << "Yes\n";
        cout << k << " ";
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
        cout << n - k << " ";
        for (int i = k + 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}