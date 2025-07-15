#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(n^3)
// S.C => O(1)
int subarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    int i, j, l, cnt = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            int sum = 0;
            for (l = i; l <= j; l++)
            {
                sum += nums[l];
            }
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
}

// T.C => O(n^2)
// S.C => O(1)
int subarraySum1(vector<int> &nums, int k)
{
    int n = nums.size();
    int i, j, cnt = 0;
    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum == k)
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        cout << subarraySum1(v, k) << nline;
    }
    return 0;
}