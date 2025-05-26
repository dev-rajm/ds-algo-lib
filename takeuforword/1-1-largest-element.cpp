#include <bits/stdc++.h>
using namespace std;

// T.C => O(n log n)
// S.C => O(n)
int brute(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    return arr[n - 1];
}

// T.C => O(n)
// S.C => O(1)
int optimal(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
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
        cout << "Optimal: " << optimal(arr, n) << "\n";
    }
}