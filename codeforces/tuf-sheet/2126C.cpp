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
    int tt, i;
    cin >> tt;

    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        k--;
        ll h[n];
        for (i = 0; i < n; i++)
            cin >> h[i];

        int curr = h[k];
        sort(h, h + n);
        for (i = 0; i < n; i++)
        {
            if (curr == h[i])
            {
                break;
            }
        }

        int water = 1;
        while (i < n - 1)
        {
            if (h[i + 1] >= water + h[i + 1] - h[i] && h[i] >= water + h[i + 1] - h[i] - 1)
            {
                water = water + h[i + 1] - h[i];
                i++;
            }
            else
            {
                break;
            }
        }

        if (i == n - 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}