#include <bits/stdc++.h>
using namespace std;

int maxDifference(string s)
{
    int diff = INT_MIN;

    unordered_map<char, int> mpp;
    for (auto ch : s)
    {
        mpp[ch]++;
    }

    for (auto &a1 : mpp)
    {
        // odd freq
        if (a1.second % 2 == 1)
        {
            for (auto &a2 : mpp)
            {
                // even freq
                if (a2.second % 2 == 0)
                {
                    diff = max(diff, a1.second - a2.second);
                }
            }
        }
    }

    return (diff == INT_MIN) ? -1 : diff;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        string s;
        cin >> s;
        cout << maxDifference(s) << "\n";
    }
    return 0;
}