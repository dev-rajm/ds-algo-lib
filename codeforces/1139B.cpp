#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll tt, n, i, j, k;

    cin >> n;
    vector<ll> a(n);
    for (ll &x : a)
        cin >> x;

    ll take = a[n - 1];
    ll total = take;
    for (i = n - 2; i >= 0; i--)
    {
        take = min(a[i], take - 1);
        if (take >= 0)
            total += take;
        else
            take = 0;
    }

    cout << total;

    return 0;
}