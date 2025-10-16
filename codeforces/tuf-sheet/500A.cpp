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

    int n, t;
    cin >> n >> t;

    vector<int> a(n + 1);

    for (int i = 1; i < n; i++)
        cin >> a[i];

    int pos = 1;
    while (pos < t)
    {
        pos += a[pos];
    }

    cout << (pos == t ? "YES" : "NO");

    return 0;
}