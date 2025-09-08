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

    ll x, y, z;
    cin >> x >> y >> z;

    ll both = (ll)(x + y) / z;

    cout << both << " ";

    ll indv = (ll)x / z + (ll)y / z;
    if (both == indv)
    {
        cout << 0;
    }
    else
    {
        cout << min(z - (x % z), z - (y % z));
    }

    return 0;
}