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