#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(N^3)
// S.C => O(1)
int CountSubarrayXorK(vector<int> a, int t)
{
    int i, j, k, xr, cnt = 0, n = a.size();
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            xr = 0;
            for (k = i; k <= j; k++)
            {
                xr ^= a[k];
            }
            if (xr == t)
                cnt++;
        }
    }
    return cnt;
}

// T.C => O(N^2)
// S.C => O(1)
int CountSubarrayXorK1(vector<int> a, int t)
{
    int i, j, xr, cnt = 0, n = a.size();
    for (i = 0; i < n; i++)
    {
        xr = 0;
        for (j = i; j < n; j++)
        {
            xr ^= a[j];
            if (xr == t)
                cnt++;
        }
    }
    return cnt;
}

// T.C => O(NlogN)
// S.C => O(N)
int CountSubarrayXorK2(vector<int> a, int t)
{
    map<int, int> mpp;
    int cnt = 0, xr = 0;
    mpp[xr]++; // {0, 1}
    for (int i = 0; i < a.size(); i++)
    {
        xr ^= a[i];
        int x = xr ^ t;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n, k;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a)
        {
            cin >> x;
        }

        cout << CountSubarrayXorK2(a, k) << nline;
    }
    return 0;
}