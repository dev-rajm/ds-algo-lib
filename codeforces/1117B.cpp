#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, k, i;
    cin >> n >> m >> k;

    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    ll full_block = arr[n - 1] * k;
    full_block += arr[n - 2];

    ll cnt_full_block_m = m / (k + 1);
    ll total_full_block = cnt_full_block_m * full_block;

    cout << total_full_block + (m % (k + 1)) * arr[n - 1];

    return 0;
}