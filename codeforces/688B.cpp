#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    cout << s;
    reverse(s.begin(), s.end());
    cout << s;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}