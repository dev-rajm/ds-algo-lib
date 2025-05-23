#include <bits/stdc++.h>
using namespace std;

vector<int> findLonely(vector<int> &nums)
{
    vector<int> ans;
    unordered_map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }

    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        if (mpp[it->first] < 2)
        {
            if (mpp.find(it->first - 1) == mpp.end() && mpp.find(it->first + 1) == mpp.end())
            {
                ans.push_back(it->first);
            }
        }
    }

    return ans;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> ans = findLonely(arr);
        for (int x : ans)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}