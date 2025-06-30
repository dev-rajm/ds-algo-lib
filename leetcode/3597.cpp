#include <bits/stdc++.h>
using namespace std;

vector<string> partitionString(string s)
{
    vector<string> ans;
    unordered_set<string> seen;
    string curr = "";
    for (char c : s)
    {
        curr += c;
        if (!seen.count(curr))
        {
            seen.insert(curr);
            ans.push_back(curr);
            curr = "";
        }
    }

    return ans;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        string s;
        cin >> s;
        vector<string> answer = partitionString(s);
        for (auto c : answer)
            cout << c << " ";
        cout << "\n";
    }
    return 0;
}