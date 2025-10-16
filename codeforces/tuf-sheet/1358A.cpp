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
    cin >> tt;

    while (tt--)
    {
        cin >> n >> m;
        cout << ((n * m) + 1) / 2 << nline;
    }
    return 0;
}