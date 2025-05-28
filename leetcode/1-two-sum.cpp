#include <bits/stdc++.h>
using namespace std;

// brute force approach (T.C => O(N^2), S.C => O(1))
vector<int> twoSum(vector<int> arr, int target)
{
    int i, j;
    for (i = 0; i < arr.size(); i++)
    {
        for (j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
                return {i, j};
        }
    }
    return {-1, -1};
}

// map approach (T.C => O(N), S.C => O(N))
vector<int> twoSum2(vector<int> arr, int target)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        if (mpp.find(target - arr[i]) == mpp.end())
            mpp[arr[i]] = i;
        else
            return {mpp[target - arr[i]], i};
    }
    return {-1, -1};
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, target;
        cin >> n >> target;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> result = twoSum2(arr, target);
        for (int x : result)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}