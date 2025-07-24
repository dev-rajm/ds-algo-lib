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

    ll n, m;
    cin >> n >> m;

    // minimum moves lies between [ceil(n/2), n]

    ll moves = (n + 2 - 1) / 2, ans = -1;
    while (moves <= n)
    {
        if (moves % m == 0)
        {
            ans = moves;
            break;
        }
        moves++;
    }

    cout << ans;

    return 0;
}