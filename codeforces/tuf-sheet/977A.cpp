#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    while (k--)
    {
        int lastDigit = n % 10;
        if (lastDigit != 0)
            n -= 1;
        else
            n /= 10;
    }

    cout << n;

    return 0;
}