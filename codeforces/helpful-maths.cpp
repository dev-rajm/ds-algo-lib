#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;

        vector<int> H(4);
        for (int ch : s)
            if (ch != '+')
                H[ch - '0']++;

        for (int i = 1, f = 0; i <= 3; i++)
        {
            while (H[i]--)
                cout << (f++ ? "+" : "") << i;
        }
        cout << '\n';
    }
    return 0;
}