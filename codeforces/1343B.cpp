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
    ll tt, n, i;
    cin >> tt;

    while (tt--)
    {
        cin >> n;
        int half = n / 2;
        if (half % 2 == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            int even[half];
            int odd[half];

            for (i = 0; i < half; i++)
            {
                even[i] = 2 * i + 2;
                odd[i] = 2 * i + 1;
            }
            odd[half - 1] += half;

            for (i = 0; i < half; i++)
            {
                cout << even[i] << " ";
            }
            for (i = 0; i < half; i++)
            {
                cout << odd[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}