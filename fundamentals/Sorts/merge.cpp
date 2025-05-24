#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp; // temporary array
    // [low...mid] [mid+1...high]
    int left = low, right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // insert left array remaining elements into temp array
    for (; left <= mid; left++)
    {
        temp.push_back(arr[left]);
    }

    // insert right array remaining elements into temp array
    for (; right <= high; right++)
    {
        temp.push_back(arr[right]);
    }

    // copy sorted elements back to the arr
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mS(vector<int> &arr, int low, int high)
{
    // Base case: if low becomes greater or equal to high
    if (low >= high)
        return;

    int mid = (low + high) / 2; // calculate the mid
    mS(arr, low, mid);          // divide left part of arr
    mS(arr, mid + 1, high);     // divide right part of arr
    merge(arr, low, mid, high); // merge the left and right arr
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        mS(arr, 0, n - 1);

        for (int x : arr)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}