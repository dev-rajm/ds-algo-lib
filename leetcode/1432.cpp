#include <bits/stdc++.h>
using namespace std;

int maxDiff(int n)
{
    string s = to_string(n);
    int maxVal = 0, minVal = INT_MAX;
    for (int x = '0'; x <= '9'; ++x)
    {
        for (int y = '0'; y <= '9'; ++y)
        {
            string t = s;
            bool chng = false;
            for (char &ch : t)
            {
                if (ch == x)
                {
                    ch = y;
                    chng = true;
                }
            }
            if (!chng)
                continue;
            if (t[0] == '0')
                continue;

            int val = stoi(t);
            maxVal = max(maxVal, val);
            minVal = min(minVal, val);
        }
    }
    return maxVal - minVal;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        cout << maxDiff(n) << "\n";
    }

    return 0;
}