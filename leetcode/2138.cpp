#include <bits/stdc++.h>
using namespace std;

vector<string> divideString(string s, int k, char fill)
{
    vector<string> divArr;

    for (int i = 0; i < s.size(); i += k)
    {
        string part = s.substr(i, k);
        divArr.push_back(part);
    }

    while (divArr.back().size() < k)
    {
        divArr.back().push_back(fill);
    }

    return divArr;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        char x;
        cin >> x;

        vector<string> vs = divideString(s, k, x);
        for (string st : vs)
            cout << st << " ";
        cout << "\n";
    }
    return 0;
}