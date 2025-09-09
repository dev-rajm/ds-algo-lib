#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

bool isValid(vector<int> arr, int divisor, int threshold)
{
    int result = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        result += ceil((double)arr[i] / (double)divisor);
    }
    if (result <= threshold)
    {
        return true;
    }
    return false;
}

// T.C => O(max(arr) * n)
// S.C => O(1)
int smallestDivisor(vector<int> &nums, int threshold)
{
    for (int i = 1; i <= *max_element(all(nums)); i++)
    {
        if (isValid(nums, i, threshold))
        {
            return i;
        }
    }
}

int smallestDivisor1(vector<int> &nums, int threshold)
{
    int low = 1, high = *max_element(all(nums));
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isValid(nums, mid, threshold))
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
    ll tt, n, threshold;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> threshold;
        vector<int> arr(n);
        for (int &x : arr)
        {
            cin >> x;
        }

        cout << smallestDivisor1(arr, threshold) << nline;
    }
    return 0;
}