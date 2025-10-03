#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        int opt = 0;
        while (a <= n && b <= n)
        {
            if (a > b)
                b += a;
            else
                a += b;
            opt++;
        }

        cout << opt << "\n";
    }
    return 0;
}