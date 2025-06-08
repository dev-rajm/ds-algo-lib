#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vs[i];
    }

    vector<int> res(n, 0);
    for (int i = 0; i < n; i++)
    {
        int giver = vs[i];
        res[giver - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
        cout << res[i] << " ";

    return 0;
}