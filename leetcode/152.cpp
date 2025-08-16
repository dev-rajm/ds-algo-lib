#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int maxProduct(vector<int> &nums)
{
    int n = nums.size();
    int i, j;
    int max_pd = INT_MIN;
    for (i = 0; i < n; i++)
    {
        int pd = 1;
        for (j = i; j < n; j++)
        {
            pd = pd * nums[j];
            max_pd = max(max_pd, pd);
        }
    }
    return max_pd;
}

int maxProduct1(vector<int> &nums)
{
    int n = nums.size();
    int pre = 1, suf = 1;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (pre == 0)
            pre = 1;
        if (suf == 0)
            suf = 1;

        pre = pre * nums[i];
        suf = suf * nums[n - i - 1];
        maxi = max(maxi, max(pre, suf));
    }
    return maxi;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        cout << maxProduct1(a) << nline;
    }
    return 0;
}