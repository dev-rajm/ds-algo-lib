#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {6, 8, 9, 10, 15, 6, 8, 12, 3, 6};
    int max_ele = *max_element(arr.begin(), arr.end());
    vector<int> count(max_ele + 1, 0);

    for (int x : arr)
    {
        count[x]++;
    }

    int i = 0, j = 0;
    while (i < max_ele + 1)
    {
        if (count[i] > 0)
        {
            arr[j++] = i;
            count[i]--;
        }
        else
        {
            i++;
        }
    }

    for (int x : arr)
        cout << x << " ";
    cout << endl;
}