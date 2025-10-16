#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    cout << (n == 0 ? 1 : (3 * (1 + n) * n + 1));
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}