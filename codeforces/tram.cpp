#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(4);
    vector<int> b(4);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }

    int cap = 0;
    int res = 0;
    for(int i=0; i<n; i++) {
        
        cap = max(cap, res);
    }

    return 0;
}