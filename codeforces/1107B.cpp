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
    ll tt, k, x;
    cin >> tt;

    while (tt--)
    {
        cin >> k >> x;
        cout << 9 * (k - 1) + x << nline;
    }
    return 0;
}