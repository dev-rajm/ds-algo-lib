#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;

    // m must be divisible by n to transform into m
    if (m % n != 0)
    {
        cout << -1;
        return 0;
    }

    ll q = m / n; // m = n x q
    int count = 0;

    // if q divisible by 2 divide it
    while (q % 2 == 0)
    {
        q /= 2;
        count += 1;
    }

    // if q divisible by 3 divide it
    while (q % 3 == 0)
    {
        q /= 3;
        count += 1;
    }

    cout << (q != 1 ? -1 : count);

    return 0;
}