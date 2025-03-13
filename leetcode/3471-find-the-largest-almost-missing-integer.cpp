#include <bits/stdc++.h>
using namespace std;

int largestInteger(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n - k + 1; i++)
    {
        unordered_set<int> st(nums.begin() + i, nums.begin() + i + k);
        for (int num : st)
        {
            mp[num]++;
        }
    }
    int missEle = -1;
    for (const auto &[num, count] : mp)
    {
        if (count == 1 && num > missEle)
        {
            missEle = num;
        }
    }
    return missEle;
}