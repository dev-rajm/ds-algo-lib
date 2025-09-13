#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

bool canPlace(int arr[], int n, int dist, int k)
{
    int cntCows = 1, last = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - last >= dist)
        {
            cntCows++;
            last = arr[i];
        }
    }
    if (cntCows >= k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// T.C => O(max-min)*O(n)
int func(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int val = *max_element(arr, arr + n) - *min_element(arr, arr + n);
    if (k == 2)
    {
        return val;
    }

    for (int i = 1; i <= val; i++)
    {
        if (canPlace(arr, n, i, k))
        {
            continue;
        }
        else
        {
            return (i - 1);
        }
    }
}

// T.C => O(log (max - min)) * O(n)
int opFunc(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int low = 1, high = arr[n - 1] - arr[0];
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int result = canPlace(arr, n, mid, k);
        if (result)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << opFunc(arr, n, k) << nline;
    }
    return 0;
}