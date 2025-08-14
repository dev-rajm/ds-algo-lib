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

    int n, k, i;
    cin >> n >> k;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    vector<pair<int, int>> ls;
    for (int i = 0; i < n; i++)
        ls.pb({i, a[i]});

    sort(all(ls), [](const pair<int, int> &p1, const pair<int, int> &p2)
         { return p1.second < p2.second; });

    vector<int> ans;
    for (auto p : ls)
    {
        if (p.second > k)
            break;
        ans.pb(p.first);
        k -= p.second;
    }

    cout << ans.size() << nline;

    if (ans.size() != 0)
        for (int x : ans)
            cout << x + 1 << " ";

    return 0;
}