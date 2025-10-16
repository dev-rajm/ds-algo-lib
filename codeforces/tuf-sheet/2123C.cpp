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
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> p(n);
        vector<int> s(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        p[0] = v[0];
        s[n - 1] = v[n - 1];

        for (int i = 1; i < n; i++)
            p[i] = min(p[i - 1], v[i]);
        for (int i = n - 2; i >= 0; i--)
            s[i] = max(s[i + 1], v[i]);

        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (p[i] < v[i] && s[i] > v[i])
            {
                ans += '0';
            }
            else
            {
                ans += '1';
            }
        }

        cout << ans << nline;
    }
    return 0;
}