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
    ll tt, a, b;
    cin >> tt;

    while (tt--)
    {
        cin >> a >> b;
        ll diff = abs(a - b);
        ll moves = diff / 10;
        if (diff % 10 == 0)
        {
            cout << moves << nline;
        }
        else
        {
            cout << moves + 1 << nline;
        }
    }
    return 0;
}