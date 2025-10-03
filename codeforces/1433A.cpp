#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int x;
        cin >> x;

        int d = x % 10;
        int l = to_string(x).size();

        int result = ((d - 1) * 10) + (l * (l + 1) / 2);

        cout << result << "\n";
    }
    return 0;
}