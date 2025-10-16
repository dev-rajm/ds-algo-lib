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
        int a[n];
        int sum = 0;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        if (sum % 2 != 0 || (odd && even))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}