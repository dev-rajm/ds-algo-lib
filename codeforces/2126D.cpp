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
    ll tt, n, i, j, k, l, r, real;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> k;
        vector<pair<int, pair<int, int>>> p;
        for (i = 0; i < n; i++)
        {
            cin >> l >> r >> real;
            p.pb({real, {l, r}});
        }

        sort(all(p));

        for (i = 0; i < n; i++)
        {
            if (k >= p[i].second.first && k <= p[i].second.second)
            {
                if (p[i].first > k)
                {
                    k = p[i].first;
                }
            }
        }

        cout << k << nline;
    }

    return 0;
}