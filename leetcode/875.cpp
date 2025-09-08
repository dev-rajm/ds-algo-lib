#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int func(vector<int> arr, int hourly)
{
    int total_time = 0, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        total_time += ceil((double)arr[i] / hourly);
    }

    return total_time;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    int maxi = *max_element(all(piles));
    for (int i = 1; i <= maxi; i++)
    {
        int reqTime = func(piles, i);
        if (reqTime <= h)
        {
            return i;
        }
    }
}

int minEatingSpeed1(vector<int> &piles, int h)
{
    int low = 1, high = *max_element(all(piles));
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int reqTime = func(piles, mid);
        if (reqTime <= h)
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
    ll tt, n, h;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> h;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << minEatingSpeed1(arr, h) << nline;
    }
    return 0;
}