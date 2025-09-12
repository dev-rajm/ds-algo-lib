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
    ll tt, x, y;
    cin >> tt;

    while (tt--)
    {
        cin >> x >> y;

        if (x == 1 && y == 1)
        {
            cout << "YES\n";
        }
        else if (x != 1 && x <= 3 && y < 4)
        {
            cout << "YES\n";
        }
        else if (x > 3)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}