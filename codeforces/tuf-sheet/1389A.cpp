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
    ll tt, l, r;
    cin >> tt;

    while (tt--)
    {
        cin >> l >> r;
        if (l * 2 > r)
            cout << "-1 -1\n";
        else
            cout << l << " " << 2 * l << nline;
    }
    return 0;
}