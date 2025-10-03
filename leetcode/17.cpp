#include <bits/stdc++.h>
using namespace std;

vector<string> letterCombinations(string digits)
{
    unordered_map<string, vector<string>> mpp = {
        {"2", {"a", "b", "c"}},
        {"3", {"d", "e", "f"}},
        {"4", {"g", "h", "i"}},
        {"5", {"j", "k", "l"}},
        {"6", {"m", "n", "o"}},
        {"7", {"p", "q", "r", "s"}},
        {"8", {"t", "u", "v"}},
        {"9", {"w", "x", "y", "z"}},
    };

    vector<string> comb = {};
    if (digits.size() == 1)
        return comb;

    for (int i = 0; i < digits.size(); i++)
    {
        char currDigit = digits[i];
    }

    return comb;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        string s;
        cin >> s;

        vector<string> arr = letterCombinations(s);
        for (string str : arr)
            cout << str << " ";
        cout << "\n";
    }
    return 0;
}