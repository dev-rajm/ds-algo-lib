#include <bits/stdc++.h>
using namespace std;

int hIndex(vector<int> &citations)
{
    vector<int> H(1001, 0);
    int i, j, h = 0;

    for (int x : citations)
        H[x]++;

    i = 1000, j = 0;

    // Sort the array
    while (i >= 0)
    {
        if (H[i] > 0)
        {
            citations[j++] = i;
            H[i]--;
        }
        else
        {
            i--;
        }
    }

    for (i = 0; i < citations.size(); i++)
    {
        if (citations[i] >= i + 1)
            h++;
        else
            break;
    }
    return h;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> vs(n);
        for (int &x : vs)
            cin >> x;

        cout << hIndex(vs) << "\n";
    }
    return 0;
}