#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int set_bit_count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            set_bit_count++;
        if (set_bit_count > 1)
            break;
    }

    if (set_bit_count == 0)
    {
        cout << "0";
    }
    else if (set_bit_count == 1)
    {
        cout << ceil((double)(s.size() - 1) / (double)2);
    }
    else
    {
        cout << ceil((double)s.size() / (double)2);
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}