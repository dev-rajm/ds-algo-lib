#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    set<int> black;
    int c;
    int nw = 2;
    for (int i = 0; i < m; i++)
    {
        cin >> c;
        if (c == nw)
            nw++;
        black.insert(c);
    }
    c = 1;
    // perform the first command
    if (s[0] == 'A')
    {
        black.insert(2);
        c = 2;
    }
    else
    {
        black.insert(nw);
        c = nw;
    }
    for (int i = 1; i < n; i++)
    {
        // check if previous command was 'B'
        if (s[i - 1] == 'B')
        {
            while (black.count(c))
                c++;
            if (s[i] == 'B')
            {
                c++;
                while (black.count(c))
                    c++;
                black.insert(c);
            }
            else
            {
                c++;
                black.insert(c);
            }
        }
        else
        {
            if (s[i] == 'B')
            {
                c++;
                while (black.count(c))
                    c++;
                black.insert(c);
            }
            else
            {
                c++;
                black.insert(c);
            }
        }
    }
    cout << black.size() << "\n";
    for (int b : black)
    {
        cout << b << " ";
    }
    cout << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}