#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int index = -1;
    int n = nums.size();
    vector<int> leftSum(n), rightSum(n);

    leftSum[0] = rightSum[n - 1] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        leftSum[i + 1] = leftSum[i] + nums[i];
    }
    for (int i = n - 1; i > 0; i--)
    {
        rightSum[i - 1] = rightSum[i] + nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (leftSum[i] == rightSum[i])
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int ans = pivotIndex(nums);
        cout << ans << "\n";
    }
    return 0;
}