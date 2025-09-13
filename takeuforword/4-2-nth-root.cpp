#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

ll func(int b, int exp)
{
    ll ans = 1;
    while (exp--)
    {
        ans = ans * b;
    }
    return ans;
}

// T.C => O(m * n)
int findNthRoot(int n, int m)
{
    for (int i = 1; i < m; i++)
    {
        ll root = func(i, n);
        if (root == m * 1ll)
        {
            return i;
        }
        else if (root > m * 1ll)
        {
            break;
        }
    }
    return -1;
}

// T.C => O(n*log m)
int opFindNthRoot(int n, int m)
{
    int low = 1, high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int root = func(mid, m);
        if (root == m)
        {
            return mid;
        }
        else if (root > mid)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n, m;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> m;
        cout << findNthRoot(n, m) << nline;
    }
    return 0;
}