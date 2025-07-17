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
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int &x : v)
        {
            cin >> x;
        }

        int i = 0;
        int hikes = 0;

        while (i <= n - k)
        {
            bool isGood = true;
            for (int j = 0; j < k; j++)
            {
                if (v[i + j] != 0)
                {
                    isGood = false;
                    break;
                }
            }

            if (isGood)
            {
                hikes++;
                i += k + 1;
            }
            else
            {
                i++;
            }
        }

        cout << hikes << nline;
    }

    return 0;
}