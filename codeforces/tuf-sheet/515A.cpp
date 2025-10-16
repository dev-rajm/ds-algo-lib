#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, s;
    cin >> a >> b >> s;

    long long sum = abs(a) + abs(b);
    long long rem = sum - s;

    if ((rem % 2) == 0 && s >= sum)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}