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

    ll x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    ll three_sum = max({x1, x2, x3, x4});

    if (three_sum - x1 != 0)
    {
        cout << three_sum - x1 << " ";
    }
    if (three_sum - x2 != 0)
    {
        cout << three_sum - x2 << " ";
    }
    if (three_sum - x3 != 0)
    {
        cout << three_sum - x3 << " ";
    }
    if (three_sum - x4 != 0)
    {
        cout << three_sum - x4 << " ";
    }

    return 0;
}