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
    ll tt, a, b, c;
    cin >> tt;

    while (tt--)
    {
        cin >> a >> b >> c;
        if (a < c)
            cout << 1 << " ";
        else
            cout << -1 << " ";

        if (c < a * b)
            cout << b;
        else
            cout << -1;

        cout << nline;
    }
    return 0;
}