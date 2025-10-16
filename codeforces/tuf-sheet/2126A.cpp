#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(N*D) [D = Number of digits in x]
// S.C => O(1)
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int x;
        cin >> x;
        int y = 10;
        while (x > 0)
        {
            y = min(y, x % 10);
            x = x / 10;
        }

        cout << y << nline;
    }

    return 0;
}