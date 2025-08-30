#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(N)
// S.C => O(1)
int upperBound(int n, int a[], int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            return i;
        }
    }
    return n;
}

// T.C => O(log2 N)
// S.C => O(1)
int upperBound1(int n, int a[], int x)
{
    int l = 0, h = n - 1;
    int ans = n;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] > x)
        {
            ans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

// Using C++ STL
int upperBound2(int n, int a[], int x)
{
    int *ub = upper_bound(a, a + n, x);
    return ub - a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n, x;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << upperBound2(n, a, x) << nline;
    }
    return 0;
}