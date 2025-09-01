#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int search(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    int rot = low;
    low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int rmid = (mid + rot) % n;
        if (arr[rmid] == target)
            return rmid;
        else if (arr[rmid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int opSearch(int arr[], int n, int target) {
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = low + (high - low) /2;
        if(arr[mid] == target) return mid;
        // left sorted
        if(arr[low] <= arr[mid]) {
            if(arr[low] <= target && target <= arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        // right sorted
        else {
            if(arr[mid] <= target && target <= arr[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n, target;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> target;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << opSearch(arr, n, target) << nline;
    }
    return 0;
}