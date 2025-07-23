#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

ll gdc(ll a, ll b)
{
    if (a < b)
        swap(a, b);

    while (b > 0)
    {
        ll c = b;
        b = a % b;
        a = c;
    }

    return a;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll a, b, k, g, g1, g2;
        cin >> a >> b >> k;

        g = gcd(a, b);
        g1 = a / g;
        g2 = b / g;

        if (g1 <= k && g2 <= k)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }
    }
    return 0;
}