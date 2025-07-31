#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(N^3)
// S.C => O(1)
int longestSubarrayLength(vector<int> a)
{
    int i, j, k, n = a.size();
    int maxi = INT_MIN;

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            int sum = 0;
            for (k = i; k <= j; k++)
                sum += a[k];

            if (sum == 0)
                maxi = max(maxi, j - i + 1);
        }
    }
    return maxi;
}

// T.C => O(N^2)
// S.C => O(1)
int longestSubarrayLength1(vector<int> a)
{
    int i, j, n = a.size();
    int maxi = INT_MIN;

    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = i; j < n; j++)
        {
            sum += a[j];

            if (sum == 0)
                maxi = max(maxi, j - i + 1);
        }
    }
    return maxi;
}

// T.C => O(NlogN)
// S.C => O(N)
int longestSubarrayLength2(vector<int> a)
{
    unordered_map<int, int> mp;
    int n = a.size();
    int sum = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == 0)
            maxi = i + 1;
        else
        {
            if (mp.find(sum) != mp.end())
                maxi = max(maxi, i - mp[sum]);

            else
                mp[sum] = i;
        }
    }
    return maxi;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n;
    cin >> tt;

    while (tt--)
    {
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        cout << longestSubarrayLength1(a) << nline;
    }
    return 0;
}