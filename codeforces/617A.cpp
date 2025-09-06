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

    ll x;
    cin >> x;

    int steps = 0;

    if (x >= 5)
    {
        steps += x / 5;
        cout << (x % 5 > 0 ? steps + 1 : steps);
    }
    else
    {
        cout << 1;
    }

    return 0;
}