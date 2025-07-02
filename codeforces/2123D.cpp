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
        string s;
        cin >> n >> k >> s;

        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                c++;
        }

        if (c <= k)
        {
            cout << "Alice" << nline;
        }
        else
        {
            if (2 * k > n)
            {
                cout << "Alice" << nline;
            }
            else
            {
                cout << "Bob" << nline;
            }
        }
    }
    return 0;
}