#include <bits/stdc++.h>
using namespace std;

// T.C => O(n)
// S.C => O(1)
int maximumDifference(vector<int> &nums)
{
    int n = nums.size();
    int diff = -1;
    int mn = nums[0];
    for (int i = 1; i < n; i++)
    {
        // if the element is greater then current min value
        if (nums[i] > mn)
            diff = max(nums[i] - mn, diff);
        // if the element is less then current min value
        if (nums[i] < mn)
            mn = nums[i];
    }
    return diff;
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
        {
            cin >> arr[i];
        }

        cout << maximumDifference(arr) << "\n";
    }
    return 0;
}