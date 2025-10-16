#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    if (a[n - 1] < (a[n - 2] + a[n - 3]))
    {
        cout << "YES\n";
        cout << a[n - 3] << " " << a[n - 1] << " " << a[n - 2] << " ";
        for (int i = n - 4; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}