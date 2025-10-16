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

        int year = stoi(s);
        if (int(sqrt(year)) * int(sqrt(year)) == year)
        {
            cout << "0 " << int(sqrt(year)) << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}