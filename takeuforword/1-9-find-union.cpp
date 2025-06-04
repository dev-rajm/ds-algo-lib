#include <bits/stdc++.h>
using namespace std;

// T.C => O(n log n + m log n) + O(n+m)
// S.C => O(n+m) + O(n)
vector<int> unionArr(vector<int> arr1, vector<int> arr2)
{
    set<int> st;
    int n = arr1.size(), m = arr2.size();

    for (int i = 0; i < n; i++)
        st.insert(arr1[i]);

    for (int i = 0; i < m; i++)
        st.insert(arr2[i]);

    vector<int> result(st.size());
    int j = 0;
    for (auto it : st)
        result[j++] = it;

    return result;
}

// T.C =>
// S.C =>
vector<int> unionArr2(vector<int> arr1, vector<int> arr2)
{
    vector<int> result;
    int m = arr1.size(), n = arr2.size();
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            if (result.size() == 0 || result.back() != arr1[i])
                result.push_back(arr1[i]);
            i++;
        }
        else
        {
            if (result.size() == 0 || result.back() != arr2[j])
                result.push_back(arr2[j]);
            j++;
        }
    }

    while (i < m)
    {
        if (result.size() == 0 || result.back() != arr1[i])
            result.push_back(arr1[i]);
        i++;
    }

    while (j < n)
    {
        if (result.size() == 0 || result.back() != arr2[j])
            result.push_back(arr2[j]);
        j++;
    }

    return result;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int m, n;
        cin >> m >> n;
        vector<int> arr1(m);
        vector<int> arr2(n);

        for (int i = 0; i < m; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        vector<int> unionArray = unionArr2(arr1, arr2);
        for (int x : unionArray)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}