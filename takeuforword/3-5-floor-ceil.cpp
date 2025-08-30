#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

vector<int> floorCeil(vector<int> a, int n, int x)
{
    int l = 0, h = n - 1;
    vector<int> arr(2);
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == x)
        {
            arr = {a[mid], a[mid]};
            return arr;
        }
        else if (a[mid] <= x)
        {
            arr[0] = a[mid];
            l = mid + 1;
        }
        else
        {
            arr[1] = a[mid];
            h = mid - 1;
        }
    }
    return arr;
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> ans = floorCeil(a, n, x);

        for (int i = 0; i <= 1; i++)
            cout << ans[i] << " ";
        cout << nline;
    }
    return 0;
}