#include <bits/stdc++.h>
using namespace std;

int differenceOfSums(int n, int m)
{
    int divisible = 0, nonDivisible = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % m == 0)
            divisible += i;
        else
            nonDivisible += i;
    }
    return nonDivisible - divisible;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;

        cout << differenceOfSums(n, m) << "\n";
    }
}