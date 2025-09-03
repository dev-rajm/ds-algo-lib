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
    int tt, n, m, ans;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> m;
        if (n == 1)
            ans = 0;
        else if (n == 2)
            ans = m;
        else
        {
            ans = min(2, n - 1) * m;
        }

        cout << ans << nline;
    }
    return 0;
}