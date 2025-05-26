#include <bits/stdc++.h>
using namespace std;

// T.C => O(n log n + n)
int brute(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    int largest = arr[n - 1];
    int slargest = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != largest)
        {
            slargest = arr[i];
            break;
        }
    }
    return slargest;
}

// T.C => O(2n)
int better(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int slargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > slargest && arr[i] != largest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

// T.C => O(n)
int optimal(vector<int> &arr, int n)
{
    int largest = arr[0];
    int slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
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

        cout << "Brute: " << brute(arr, n) << "\n";
        cout << "Better: " << better(arr, n) << "\n";
        cout << "Optimal: " << optimal(arr, n) << "\n";
    }
}