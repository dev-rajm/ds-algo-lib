#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        vector<string> arr(n);
        for (string &s : arr)
            cin >> s;

        vector<vector<string>> result = groupAnagrams(arr);
        for (const auto &row : result)
        {
            for (auto str : row)
            {
                cout << str << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}