#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

string findValidPair(string s)
{
    unordered_map<char, int> mp;
    for (char ch : s)
    {
        mp[ch]++;
    }

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1] && mp[s[i]] == s[i] - '0' && mp[s[i - 1]] == s[i - 1] - '0')
        {
            return s.substr(i - 1, 2);
        }
    }
    return "";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll tt;
    cin >> tt;

    while (tt--)
    {
        string s;
        cin >> s;

        cout << findValidPair(s) << nline;
    }
    return 0;
}