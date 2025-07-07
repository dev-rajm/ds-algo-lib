#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    vector<int> ex;
    vector<int> en;
    int temp = n;
    while (temp--)
    {
        int a, b;
        cin >> a >> b;
        ex.pb(a);
        en.pb(b);
    }

    int cap = 0;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total -= ex[i];
        total += en[i];
        cap = max(cap, total);
    }

    cout << cap;

    return 0;
}