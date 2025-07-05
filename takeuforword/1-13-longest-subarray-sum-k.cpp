#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(n^3)
// S.C => O(1)
int longestSubarrayWithSumK(vector<int> v, int k)
{
    int i, j, maxLen = 0;
    int n = v.size();
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += v[k];
            }
            if (sum == k)
            {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
}

// T.C => O(n^2)
// S.C => O(1)
int longestSubarrayWithSumK1(vector<int> v, int k)
{
    int i, j, maxLen = 0;
    int n = v.size();
    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = i; j < n; j++)
        {
            sum += v[k];
            if (sum == k)
            {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
}

// T.C => O(nlogn)
// S.C => O(n)
int longestSubarrayWithSumK2(vector<int> v, int k)
{
    map<int, int> mp;
    int n = v.size(), sum = 0, maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if (mp.find(rem) != mp.end())
        {
            int len = i - mp[rem];
            maxLen = max(maxLen, len);
        }
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }

    return maxLen;
}

// T.C => O(2N)
// S.C => O(1)
int longestSubarrayWithSumK3(vector<int> v, int k)
{
    int l = 0, r = 0;
    int maxLen = 0, sum = v[0], n = v.size();
    while (r < n)
    {
        r++;
        while (l <= r && sum > k)
        {
            sum -= v[l++];
        }
        if (sum == k)
        {
            maxLen = max(maxLen, r - l);
        }
        if (r < n)
        {
            sum += v[r];
        }
    }
    return maxLen;
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
        cout << longestSubarrayWithSumK3(v, k) << nline;
    }
    return 0;
}