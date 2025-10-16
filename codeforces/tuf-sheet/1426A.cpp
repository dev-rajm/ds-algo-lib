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
    ll tt, n, x;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> x;
        int i = 0;
        while (i * x + 2 < n)
            i++;

        cout << i + 1 << nline;
    }
    return 0;
}