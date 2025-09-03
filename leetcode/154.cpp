#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int findMin(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] > nums[high])
        {
            low = mid + 1;
        }
        else if (nums[mid] < nums[high])
        {
            high = mid;
        }
        else
        {
            high--;
        }
    }

    return nums[low];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n;
    cin >> tt;

    while (tt--)
    {
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << findMin(arr) << nline;
    }
    return 0;
}