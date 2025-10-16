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
    ll tt;
    cin >> tt;
    string s;

    while (tt--)
    {
        cin >> s;
        int sum = 0;
        int even_cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int val = s[i] - '0';
            if (val % 2 == 0)
                even_cnt++;
            sum += val;
        }

        if (sum % 3 == 0)
        {
            if (s.find('0') != s.npos)
            {
                if (even_cnt >= 2)
                {
                    cout << "red\n";
                }
                else
                {
                    cout << "cyan\n";
                }
            }
            else
            {
                cout << "cyan\n";
            }
        }
        else
        {
            cout << "cyan\n";
        }
    }
    return 0;
}