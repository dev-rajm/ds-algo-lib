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
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int &x : v)
        {
            cin >> x;
        }

        int ans = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                c++;
            }
            else
            {
                c = 0;
            }

            if (c == k)
            {
                ans++;
                c = 0;
                i += 1;
            }
        }
        cout << ans << nline;
    }

    return 0;
}