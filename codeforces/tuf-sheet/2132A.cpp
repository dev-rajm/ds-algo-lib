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

    ll tt, n, m;
    string a, b, c;
    string ans;

    cin >> tt;
    while (tt--)
    {
        cin >> n >> a >> m >> b >> c;
        ans = a;
        for (int i = 0; i < m; i++)
        {
            if (c[i] == 'D')
                ans = ans + b[i];
            else
                ans = b[i] + ans;
        }

        cout << ans << nline;
    }
    return 0;
}