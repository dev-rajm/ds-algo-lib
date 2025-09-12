#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int findKthPositive(vector<int> &arr, int k)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= k)
        {
            k++;
        }
    }
    return k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt, n, k;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << findKthPositive(arr, k) << nline;
    }
    return 0;
}