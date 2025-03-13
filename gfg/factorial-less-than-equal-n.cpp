#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;

ll fact(ll n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

vl factorialNumbers(ll n)
{
    vl vs;
    for (ll i = 1; i <= n; i++)
    {
        ll res = fact(i);
        if (res <= n)
            vs.push_back(res);
        else
            break;
    }
    return vs;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vl ans = factorialNumbers(n);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}