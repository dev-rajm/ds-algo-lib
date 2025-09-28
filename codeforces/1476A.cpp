#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long cf = floor((double)(n + k - 1) / (double)k);
    long long mini = floor((double)(cf * k + n - 1) / (double)n);
    cout << abs(mini) << "\n";
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