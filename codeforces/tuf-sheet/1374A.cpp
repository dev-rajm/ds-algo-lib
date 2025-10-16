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
    ll tt, x, y, n;
    cin >> tt;

    while (tt--)
    {
        cin >> x >> y >> n;
        ll k = ((n - y) / x) * x + y;
        cout << k << nline;
    }
    return 0;
}