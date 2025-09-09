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
    ll tt, a, b, ans;
    cin >> tt;

    while (tt--)
    {
        cin >> a >> b;
        if ((a % 2) == 0 && (b % 2) == 0)
        {
            a = a * (b / 2);
            b = 2;
            ans = a + b;
        }
        else if ((a % 2) == 1 && (b % 2) == 1)
        {
            a = a * b;
            b = 1;
            ans = a + b;
        }
        else if ((a % 2) == 1 && (b % 2) == 0)
        {
            a = a * (b / 2);
            b = 2;
            ans = a + b;

            if (ans % 2 == 1)
            {
                ans = -1;
            }
        }
        else
        {
            ans = -1;
        }
        cout << ans << nline;
    }
    return 0;
}