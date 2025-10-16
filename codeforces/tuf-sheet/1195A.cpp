#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, d;
    cin >> n >> k;

    int arr[k + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        arr[d]++;
    }

    int sets = 0;
    for (int i = 1; i < k + 1; i++)
    {
        sets += ceil((double)arr[i] / (double)2);
    }

    cout << n - (sets - ceil((double)n / (double)2));
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}