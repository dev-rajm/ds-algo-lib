#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(n(x+y))
// S.C => O(1)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x, y, i, j;
    cin >> n >> x >> y;

    ll a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
    {
        bool x_d = true;
        bool y_d = true;
        for (j = i - x; j <= i; j++)
        {
            if (j >= 0 && a[j] < a[i])
            {
                x_d = false;
            }
        }
        for (j = i + 1; j <= i + y; j++)
        {
            if (j <= n && a[j] < a[i])
            {
                y_d = false;
            }
        }

        if (x_d && y_d)
        {
            break;
        }
    }

    cout << i + 1;

    return 0;
}