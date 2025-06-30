#include <bits/stdc++.h>
using namespace std;

int findLHS(vector<int> &nums)
{
    int n = nums.size(), maxSum = 0;
    unordered_map<int, int> freq;
    for (int num : nums)
        freq[num]++;

    for (int i = 0; i < n; i++)
    {
        if (freq.find(nums[i]) != freq.end() && freq.find(nums[i] + 1) != freq.end())
            maxSum = max(maxSum, freq[nums[i]] + freq[nums[i] + 1]);
    }

    return maxSum;
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

        cout << findLHS(arr) << "\n";
    }
    return 0;
}