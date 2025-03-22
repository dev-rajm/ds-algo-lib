#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    string ans = "";
    for (char ch : s)
    {
        if (ans.empty() || ch != ans.back())
        {
            ans.push_back(ch);
        }
        else
        {
            ans.pop_back();
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
        string answer = removeDuplicates(s);
        cout << answer << "\n";
    }
}