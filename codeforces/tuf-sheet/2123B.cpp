#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        if (k >= 2 || v[j - 1] == *max_element(all(v)))
            cout << "YES" << nline;
        else
            cout << "NO" << nline;
    }
    return 0;
}