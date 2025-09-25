#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n == 1)
        cout << k;
    else if (n == k)
        cout << 1;
    else
    {
        int low = 1, high = k;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int sum = (mid * (mid + 1)) / 2;
            if (sum % k == 0)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << high;
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