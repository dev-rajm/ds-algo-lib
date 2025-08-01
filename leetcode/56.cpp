#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(N^2 + NlogN)
// S.C => O(N)
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    int n = intervals.size();

    sort(all(intervals));

    for (int i = 0; i < n; i++)
    {
        int start = intervals[i][0];
        int end = intervals[i][1];

        if (!ans.empty() && end <= ans.back()[1])
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (intervals[j][0] <= end)
                end = max(end, intervals[j][1]);
            else
                break;
        }
        ans.pb({start, end});
    }
    return ans;
}

// T.C => O(NlogN)
// S.C => O(N)
vector<vector<int>> merge1(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    int n = intervals.size();

    sort(all(intervals));

    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || intervals[i][0] > ans.back()[1])
        {
            ans.pb(intervals[i]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n;
    cin >> tt;

    while (tt--)
    {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(2));
        for (auto &rows : a)
        {
            for (auto &col : rows)
                cin >> col;
        }

        vector<vector<int>> ans = merge1(a);
        for (auto rows : ans)
        {
            for (auto col : rows)
                cout << col << " ";
            cout << nline;
        }
        cout << nline;
    }
    return 0;
}