#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, a, b, c, n;
    cin >> tt;

    while (tt--)
    {
        cin >> a >> b >> c >> n;
        ll maxi = max({a, b, c});

        ll A = maxi - a;
        ll B = maxi - b;
        ll C = maxi - c;

        ll sum = A + B + C;

        if (sum <= n && (sum - n) % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}