#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    int maxi = max({x, y, z});
    int mini = min({x, y, z});

    int mid = (x + y + z) - (maxi + mini);

    cout << abs(x - mid) + abs(y - mid) + abs(z - mid);

    return 0;
}