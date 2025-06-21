#include <bits/stdc++.h>
using namespace std;

int catchThieves(vector<char> &arr, int k)
{
    vector<int> pol;
    vector<int> thv;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 'P')
            pol.push_back(i);
        else
            thv.push_back(i);
    }

    int ans = 0;
    int i = 0, j = 0;
    while (i < pol.size() && j < thv.size())
    {
        if (abs(pol[i] - thv[j]) <= k)
        {
            ans++;
            i++;
            j++;
        }
        else if (pol[i] < thv[j])
            i++;
        else
            j++;
    }

    return ans;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<char> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << catchThieves(arr, k) << "\n";
    }
    return 0;
}