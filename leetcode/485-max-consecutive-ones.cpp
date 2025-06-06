#include <bits/stdc++.h>
using namespace std;

// T.C => O(N)
// S.C => O(1)
int findMaxConsecutiveOnes(vector<int> &arr)
{
    int n = arr.size(), cnt = 0;

    int i = 0, j = 0;
    while (j < n)
    {
        if (arr[j] != 0)
        {
            j++;
            cnt = max(cnt, j - i);
        }
        else
        {
            i = j + 1;
            j = j + 1;
        }
    }

    return cnt;
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
            cin >> arr[i];

        cout << findMaxConsecutiveOnes(arr) << "\n";
    }
    return 0;
}