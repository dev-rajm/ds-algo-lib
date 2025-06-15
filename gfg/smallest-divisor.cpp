#include <bits/stdc++.h>
using namespace std;

// T.C => O(x * n)
// S.C => O(1)
int smallestDivisor(vector<int> &arr, int k)
{
    int maxEl = *max_element(arr.begin(), arr.end());
    int d = 1;
    while (d <= maxEl)
    {
        int sum = 0;
        for (int num : arr)
        {
            sum += ceil((double)num / d);
        }
        if (sum > k)
            d++;
        else
            break;
    }
    return d;
}

// T.C => O(x * n)
// S.C => O(1)
int smallestDivisor2(vector<int> &arr, int k)
{
    int left = 1, right = *max_element(arr.begin(), arr.end());
    int d = right;
    while (left <= right)
    {
        int mid = (right + left) / 2;
        int sum = 0;
        for (int num : arr)
        {
            sum += ceil((double)num / mid);
        }
        if (sum <= k)
        {
            d = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return d;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << smallestDivisor2(arr, k) << "\n";
    }
    return 0;
}