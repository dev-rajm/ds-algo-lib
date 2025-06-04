#include <bits/stdc++.h>
using namespace std;

// T.C => O(n+m)
// S.C => O(n+m)
vector<int> findIntersection(vector<int> a, vector<int> b)
{
    vector<int> result;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            result.push_back(a[i]);
            i++, j++;
        }
    }
    return result;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n), arr2(m);
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < m; i++)
            cin >> arr2[i];

        vector<int> result = findIntersection(arr1, arr2);
        for (int x : result)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}