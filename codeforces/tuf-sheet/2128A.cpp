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
    ll tt, n, c, i, j, ans;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> c;
        ll a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        reverse(a, a + n);

        j = 0;
        ans = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] * pow(2, j) <= c)
            {
                ans++;
                j++;
            }
        }

        cout << n - ans << nline;
    }
    return 0;
}