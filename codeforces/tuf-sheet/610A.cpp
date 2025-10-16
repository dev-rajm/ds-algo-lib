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

    ll n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << 0;
    }
    else
    {
        ll ways = n / 2;
        cout << (ways % 2 == 0 ? (ways / 2) - 1 : (ways / 2));
    }

    return 0;
}