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
        int area = min(max(2 * a, b), max(a, 2 * b));
        cout << area * area << nline;
    }
    return 0;
}