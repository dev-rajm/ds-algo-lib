#include <bits/stdc++.h>
using namespace std;

// T.C => O(n + x + n-x) => O(2n)
// S.C => O(n)
void moveZeros(vector<int> &vs)
{
    vector<int> temp;
    int n = vs.size();
    // copy all non-zero elements in temp array
    for (int i = 0; i < n; i++)
    {
        if (vs[i] != 0)
        {
            temp.push_back(vs[i]);
        }
    }

    // Copy non zero element back to vs
    for (int i = 0; i < temp.size(); i++)
    {
        vs[i] = temp[i];
    }

    // set all remaining elements with 0's
    for (int i = temp.size(); i < n; i++)
    {
        vs[i] = 0;
    }
}

// T.C => O(n + x)
// S.C => O(1)
void moveZeros2(vector<int> &vs)
{
    int j = -1;
    int n = vs.size();
    for (int i = 0; i < n; i++)
    {
        if (vs[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int i = j; i < n && j != -1; i++)
    {
        if (vs[i] != 0)
        {
            swap(vs[i], vs[j]);
            j++;
        }
    }
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

        moveZeros2(arr);

        for (int x : arr)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}