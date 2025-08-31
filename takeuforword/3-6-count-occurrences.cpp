#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int countOccurrence(int a[], int n, int x)
{
    int l = 0, h = n - 1;
    int first = -1, last = -1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == x)
        {
            first = last = mid;
            while (first > 0 && a[first - 1] == x)
                first--;
            while (last < n - 1 && a[last + 1] == x)
                last++;
            return last - first + 1;
        }
        else if (a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return 0;
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

        cout << countOccurrence(a, n, x) << nline;
    }
    return 0;
}