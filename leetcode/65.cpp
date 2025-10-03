#include <bits/stdc++.h>
using namespace std;

const regex pattern("^[+-]?([0-9]+\\.?[0-9]*|[0-9]*\\.?[0-9]+)([eE][+-]?[0-9]+)?$");

bool isNumber(string s)
{
    return regex_match(s, pattern);
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        string s;
        cin >> s;

        cout << isNumber(s) << "\n";
    }
    return 0;
}