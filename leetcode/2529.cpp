#include <bits/stdc++.h>
using namespace std;

int maximumCount(vector<int> &nums)
{
    int n = nums.size();
    int neg = -1, pos = n;
    int l = 0, h = n - 1;
    // Find first +ve
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (nums[mid] > 0)
        {
            pos = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    l = 0, h = n - 1;

    // Find last -ve
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (nums[mid] < 0)
        {
            neg = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    return max(neg + 1, n - pos);
}