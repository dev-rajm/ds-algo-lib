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
    string s;

    while (tt--)
    {
        cin >> n >> s;
        bool flag = true;

        for (int i = 0; i < n / 2; i++)
        {
            int diff = abs(s[i] - s[n - i - 1]);
            if (diff != 0 && diff != 2)
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}