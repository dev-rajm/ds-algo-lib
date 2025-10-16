#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    cin >> t;
    string ans = "NO";
    for (int i = 0; i < 5; i++)
    {
        string c;
        cin >> c;
        if (c[0] == t[0] || c[1] == t[1])
            ans = "YES";
    }

    cout << ans;

    return 0;
}