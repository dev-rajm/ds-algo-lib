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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int even_pos = (n + 1) / 2;
        int odd_pos = (n / 2);

        int even_count = 0, odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }

        if (even_count != even_pos)
        {
            cout << "-1\n";
            continue;
        }

        int mismatch = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != a[i] % 2)
                mismatch++;
        }

        cout << mismatch / 2 << nline;
    }
    return 0;
}