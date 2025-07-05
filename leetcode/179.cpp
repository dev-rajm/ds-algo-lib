#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(nlogn)
// S.C => O(2n)
string largestNumber(vector<int> &nums)
{
    vector<string> v;
    for (int i : nums)
    {
        v.pb(to_string(i));
    }
    sort(all(v), [](const string a, const string b)
         { return a + b > b + a; });

    if (v[0] == "0")
        return "0";

    string ans = "";
    for (auto x : v)
    {
        ans += x;
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
        vector<int> v(n);
        for (int &x : v)
        {
            cin >> x;
        }
        cout << largestNumber(v) << nline;
    }
    return 0;
}