#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// Generate all subarrays
// T.C => O(n^3)
// S.C => O(1)
int maxSubArray(vector<int> &nums)
{
    int i, j, k, n = nums.size();
    int maxi = INT_MIN;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            int sum = 0;
            for (k = i; k <= j; k++)
            {
                sum += nums[k];
            }
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}

// T.C => O(n^2)
// S.C => O(1)
int maxSubArray1(vector<int> &nums)
{
    int i, j, n = nums.size();
    int maxi = INT_MIN;
    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = i; j < n; j++)
        {
            sum += nums[j];
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}

// Kadanes Algorithm
// T.C => O(n)
// S.C => O(1)
int maxSubArray2(vector<int> &nums)
{
    int maxi = INT_MIN;
    int sum = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum < 0)
        {
            sum = 0;
        }
        if (sum > maxi)
        {
            maxi = sum;
        }
    }
    return maxi;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        cout << maxSubArray2(v) << nline;
    }
    return 0;
}