#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> vs;
        string toStr = to_string(n);
        int len = toStr.size();

        int j = len - 1;
        for (int i = 0; i < len; i++)
        {
            int zerosNeeded = j - i;
            int x = toStr[i] - '0';

            if (x != 0)
            {
                for (int i = 1; i <= zerosNeeded; i++)
                    x *= 10;
                vs.push_back(x);
            }
        }

        cout << vs.size() << "\n";
        for (int x : vs)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}