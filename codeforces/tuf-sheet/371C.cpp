#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    long long r;
    cin >> r;

    long long cb = 0, cs = 0, cc = 0;
    for (char ch : s)
    {
        if (ch == 'B')
            cb++;
        else if (ch == 'S')
            cs++;
        else
            cc++;
    }

    long long low = 0, high = 1e15;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long cost = max(0LL, cb * mid - nb) * pb + max(0LL, cs * mid - ns) * ps + max(0LL, cc * mid - nc) * pc;
        if (cost > r)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << high;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}