#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int sqrt1(ll n)
{
    int ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll val = i * i;
        if (val <= n * 1ll)
        {
            ans = i;
        }
        else
        {
            break;
        }
    }
    return ans;
}

int sqrt2(ll n)
{
    return sqrt(n);
}

int sqrt3(ll n)
{
    int low = 1, high = n;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll val = mid * mid;
        if (val <= (ll)n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n;
    cin >> tt;

    while (tt--)
    {
        cin >> n;
        cout << sqrt3(n) << nline;
    }
    return 0;
}