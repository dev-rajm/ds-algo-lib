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

    ll tt, n;
    cin >> tt;

    while (tt--)
    {
        cin >> n;
        cout << (int)ceil((n - 1) / 2) << nline;
    }
    return 0;
}