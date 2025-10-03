#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string res = "";
    sort(strs.begin(), strs.end());

    string first = strs[0], last = strs[strs.size() - 1];
    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if (first[i] != last[i])
            break;
        res += first[i];
    }

    return res;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        vector<string> vs(n);
        for (int i = 0; i < n; i++)
            cin >> vs[i];

        cout << longestCommonPrefix(vs) << "\n";
    }
    return 0;
}