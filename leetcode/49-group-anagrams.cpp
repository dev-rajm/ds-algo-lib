#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<string> temp(strs); // copy strs

    // sort each string in strs
    for (string &s : strs)
        sort(s.begin(), s.end());

    // store the index of group anagrams
    unordered_map<string, vector<int>> mpp;
    for (int i = 0; i < strs.size(); i++)
        mpp[strs[i]].push_back(i);

    vector<vector<string>> vs(mpp.size());
    // create the final array
    int j = 0;
    for (auto it : mpp)
    {
        for (auto i : it.second)
            vs[j].push_back(temp[i]);
        j += 1;
    }

    return vs;
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