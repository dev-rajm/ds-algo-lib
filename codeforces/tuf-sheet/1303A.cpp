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
        int first = -1, last = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (first == -1)
                    first = i;
                last = i;
            }
        }

        int cnt = count(s.begin() + first, s.begin() + last, '0');

        cout << cnt << "\n";
    }
    return 0;
}