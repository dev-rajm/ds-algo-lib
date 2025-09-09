#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int possible(vector<int> arr, int capacity)
{
    int days = 1, weight = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (weight + arr[i] > capacity)
        {
            days = days + 1;
            weight = arr[i];
        }
        else
        {
            weight += arr[i];
        }
    }
    return days;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int sum = 0;
    for (int i = 0; i < weights.size(); i++)
    {
        sum += weights[i];
    }
    for (int i = *max_element(all(weights)); i < sum; i++)
    {
        if (possible(weights, i) <= days)
        {
            return i;
        }
    }
}

int shipWithinDays1(vector<int> &weights, int days)
{
    int low = *max_element(all(weights));
    int high = accumulate(all(weights), 0);

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (possible(weights, mid) <= days)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n, days;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> days;
        vector<int> arr(n);
        for (int &x : arr)
            cin >> x;

        cout << shipWithinDays1(arr, days) << nline;
    }
    return 0;
}