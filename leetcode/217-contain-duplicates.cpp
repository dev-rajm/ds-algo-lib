#include <bits/stdc++.h>
using namespace std;

// Brute force approach (T.C => O(N^2), S.C => O(1))
bool containDuplicates(vector<int> arr)
{
    int i, j, n = arr.size();
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                return true;
        }
    }
    return false;
}

// Sorted approach (T.C => O(N log N), S.C => O(1))
bool containDuplicates2(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            return true;
    }
    return false;
}

// Set approach (T.C => O(N), S.C => O(N))
bool containDuplicates3(vector<int> arr)
{
    return arr.size() > unordered_set<int>(arr.begin(), arr.end()).size();
}

// Hash map approach (T.C => O(N), S.C => O(N))
bool containDuplicates4(vector<int> arr)
{
    unordered_map<int, int> mpp;
    for (int x : arr)
        mpp[x]++;
    for (auto it : mpp)
    {
        if (it.second >= 2)
            return true;
    }
    return false;
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

        cout << containDuplicates4(arr) << "\n";
    }

    return 0;
}