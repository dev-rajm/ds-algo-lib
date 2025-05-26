#include <bits/stdc++.h>
using namespace std;

// T.C => O(n)
bool isSorted(vector<int> arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
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

        cout << isSorted(arr) << "\n";
    }
}