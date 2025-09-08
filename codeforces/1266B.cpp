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
    ll tt, x;
    cin >> tt;

    while (tt--)
    {
        cin >> x;
        int top = x % 14;
        ll d = x / 14;

        cout << (d >= 1 && top >= 1 && top <= 6 ? "YES" : "NO") << nline;
    }
    return 0;
}