#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

vector<int> generateRow(int row)
{
    ll ans = 1;
    vector<int> v;
    v.pb(ans);
    for (int col = 1; col < row; col++)
    {
        ans = ans * (row - col);
        ans = ans / col;
        v.pb(ans);
    }
    return v;
}

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= numRows; i++)
    {
        ans.pb(generateRow(i));
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        vector<vector<int>> result = generate(n);
        for (auto item : result)
        {
            for (auto el : item)
                cout << el << " ";
            cout << nline;
        }
    }
    return 0;
}