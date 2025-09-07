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
    ll tt, x, y, z;
    cin >> tt;

    while (tt--)
    {
        cin >> x >> y >> z;
        ll maxi = max({x, y, z});
        int cmax = (x == maxi) + (y == maxi) + (z == maxi);
        if (cmax < 2)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        ll a, b, c;
        if (x == maxi && y == maxi)
        {
            a = maxi;
            b = c = z;
        }
        else if (x == maxi && z == maxi)
        {
            b = maxi;
            a = c = y;
        }
        else
        {
            c = maxi;
            a = b = x;
        }

        cout << a << " " << b << " " << c << nline;
    }
    return 0;
}