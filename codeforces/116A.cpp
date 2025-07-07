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

    int total = 0;
    int cap = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        total -= a;
        total += b;

        if (total > cap)
        {
            cap = total;
        }
    }

    cout << cap;

    return 0;
}