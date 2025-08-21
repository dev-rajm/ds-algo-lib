#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

bool isPair = false;

void merge(vector<pair<int, int>> &arr, int low, int mid, int high)
{
    vector<pair<int, int>> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left].first <= arr[right].first)
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
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void checkPair(vector<pair<int, int>> &arr, int low, int mid, int high, int indexDiff, int valueDiff)
{
    int right = mid + 1;
    for (int i = low; i <= mid; i++)
    {
        while (right <= high)
        {
            int idx1 = arr[i].second;
            int idx2 = arr[right].second;
            if (abs(idx1 - idx2) <= indexDiff && abs(arr[i].first - arr[right].first) <= valueDiff)
            {
                isPair = true;
                break;
            }
            right++;
        }
        right = mid + 1;
    }
}

void mergeSort(vector<pair<int, int>> &arr, int low, int high, int indexDiff, int valueDiff)
{
    if (low >= high || isPair)
        return;

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid, indexDiff, valueDiff);
    mergeSort(arr, mid + 1, high, indexDiff, valueDiff);

    checkPair(arr, low, mid, high, indexDiff, valueDiff);
    merge(arr, low, mid, high);
}

bool containsNearbyAlmostDuplicate(vector<int> &nums, int indexDiff, int valueDiff)
{
    int n = nums.size();
    isPair = false;

    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
        arr.pb({nums[i], i});

    mergeSort(arr, 0, n - 1, indexDiff, valueDiff);
    return isPair;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt, n, indexDiff, valueDiff;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> indexDiff >> valueDiff;
        vector<int> arr(n);
        for (int &x : arr)
            cin >> x;

        cout << containsNearbyAlmostDuplicate(arr, indexDiff, valueDiff) << nline;
    }
    return 0;
}