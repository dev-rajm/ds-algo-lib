#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> s2(nums2.begin(), nums2.end());

    vector<int> vs1;
    vector<int> vs2;

    for (int num : s1)
    {
        if (s2.find(num) == s2.end())
            vs1.push_back(num);
    }
    for (int num : s2)
    {
        if (s1.find(num) == s1.end())
            vs2.push_back(num);
    }

    return {vs1, vs2};
}

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int m;
        cin >> m;
        vector<int> nums1(m);
        for (int i = 0; i < m; i++)
        {
            cin >> nums1[i];
        }
        int n;
        cin >> n;
        vector<int> nums2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums2[i];
        }

        vector<vector<int>> ans = findDifference(nums1, nums2);
        for (auto it : ans)
        {
            for (int n : it)
            {
                cout << n << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}