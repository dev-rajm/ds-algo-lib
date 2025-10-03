#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &arr, int target)
{
    int n = arr.size();
    if (n < target)
        return -1;

    sort(arr.begin(), arr.end());
    int closest = arr[0] + arr[1] + arr[2];

    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == target)
                return sum;
            if (abs(target - sum) < abs(target - closest))
                closest = sum;
            if (sum > target)
                k--;
            else
                j++;
        }
    }
    return closest;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        int target;
        cin >> n >> target;
        vector<int> arr(n);
        for (int &x : arr)
            cin >> x;

        cout << threeSumClosest(arr, target) << "\n";
    }
    return 0;
}