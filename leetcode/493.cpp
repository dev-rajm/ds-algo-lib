#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int cnt = 0;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    int i;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.pb(arr[left]);
            left++;
        }
        else
        {
            temp.pb(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.pb(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.pb(arr[right]);
        right++;
    }

    for (i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void countPairs(vector<int> &arr, int low, int mid, int high)
{
    int right = mid + 1;
    for (int i = low; i <= mid; i++)
    {
        while (right <= high && arr[i] > 2 * arr[right])
            right++;

        cnt += (right - (mid + 1));
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    countPairs(arr, low, mid, high);
    merge(arr, low, mid, high);
}

int reversePairs(vector<int> &nums)
{
    int n = nums.size();
    int pairs = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > 2 * nums[j])
                pairs++;
        }
    }

    return pairs;
}

int reversePairs1(vector<int> &nums)
{
    int n = nums.size();
    mergeSort(nums, 0, n - 1);
    return cnt;
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
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        cout << reversePairs1(a) << nline;
    }
    return 0;
}