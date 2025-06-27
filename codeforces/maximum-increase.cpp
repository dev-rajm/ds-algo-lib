#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0, j = 0;
    int maxLen = 0;
    while (j < n - 1)
    {
        if (arr[j + 1] > arr[j])
        {
            j++;
        }
        else
        {
            i = j + 1;
            j = j + 1;
        }
        maxLen = max(maxLen, j - i + 1);
    }
    cout << (n == 1 ? 1 : maxLen);
    return 0;
}