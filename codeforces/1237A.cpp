#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i;
    cin >> n;

    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];

    int b[n];
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        b[i] = a[i] / 2;
        sum += b[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            if (sum < 0 && a[i] > 0)
            {
                b[i]++;
                sum++;
            }
            else if (sum > 0 && a[i] < 0)
            {
                b[i]--;
                sum--;
            }
        }
    }

    for (i = 0; i < n; i++)
        cout << b[i] << nline;

    return 0;
}