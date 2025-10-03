#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int totalCost = 0;
    for (int i = 1; i <= w; i++)
    {
        totalCost += i * k;
    }

    cout << (totalCost > n ? totalCost - n : 0);

    return 0;
}