#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w, h, k;
    cin >> w >> h;

    long long ans = LONG_LONG_MIN;
    vector<long long> top, bottom, left, right;

    cin >> k;
    bottom.resize(k);
    for (int i = 0; i < k; i++)
        cin >> bottom[i];

    cin >> k;
    top.resize(k);
    for (int i = 0; i < k; i++)
        cin >> top[i];

    cin >> k;
    left.resize(k);
    for (int i = 0; i < k; i++)
        cin >> left[i];

    cin >> k;
    right.resize(k);
    for (int i = 0; i < k; i++)
        cin >> right[i];

    ans = max(ans, (bottom.back() - bottom.front()) * h);
    ans = max(ans, (top.back() - top.front()) * h);
    ans = max(ans, (left.back() - left.front()) * w);
    ans = max(ans, (right.back() - right.front()) * w);

    cout << ans << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}