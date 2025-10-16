#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int fx = 0, fy = 0, fz = 0;

    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;

        fx += x;
        fy += y;
        fz += z;
    }

    if (fx == 0 && fy == 0 && fz == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}