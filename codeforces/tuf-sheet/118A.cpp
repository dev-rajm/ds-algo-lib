#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    unordered_set<char> vw = {'a', 'e', 'y', 'i', 'o', 'u'};
    string res = "";
    for (auto &ch : s)
    {
        ch = tolower(ch);
        if (vw.find(ch) == vw.end())
        {
            res += '.';
            res += ch;
        }
    }

    cout << res;

    return 0;
}