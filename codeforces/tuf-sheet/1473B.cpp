#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;

    auto mul = [](string s, int k) -> string
    {
        string res = "";
        while (k--)
            res += s;
        return res;
    };

    int n = s.size(), m = t.size();
    int g = __gcd(m, n);
    if (mul(s, m / g) == mul(t, n / g))
    {
        cout << mul(s, m / g) << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
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