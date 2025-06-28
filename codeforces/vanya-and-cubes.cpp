#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int level = 1;
    int height = 0;
    int total = 0;

    while (true)
    {
        int needed = level * (level + 1) / 2;
        total += needed;
        if (total > n)
            break;
        height += 1;
        level += 1;
    }

    cout << height;

    return 0;
}