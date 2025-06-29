#include <bits/stdc++.h>
using namespace std;

// T.C => O(N+N+K)
// S.C => O(1)
int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        string s;
        cin >> s;

        int n = s.size();
        int first = 0, last = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                first = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                last = i;
                break;
            }
        }

        int cnt = 0;
        while (first <= last && first != last)
        {
            if (s[first] == '0')
                cnt++;
            first++;
        }

        cout << cnt << "\n";
    }
    return 0;
}