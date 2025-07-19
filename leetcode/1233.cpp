#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(N)
// S.C => O(N) to store the answer array
vector<string> removeSubfolders(vector<string> &folder)
{
    int n = folder.size();
    vector<string> ans;

    sort(all(folder));
    for (const string &path : folder)
    {
        if (ans.empty() || path.substr(0, ans.back().size()) != ans.back() || path[ans.back().size()] != '/')
        {
            ans.pb(path);
        }
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll tt, n, i, j, k;
    cin >> tt;

    while (tt--)
    {
        cin >> n;
        vector<string> v(n);
        for (string &s : v)
            cin >> s;

        vector<string> ans = removeSubfolders(v);
        for (string s : ans)
            cout << s << " ";
        cout << nline;
    }
    return 0;
}