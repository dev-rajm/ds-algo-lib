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

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + (n - 1 - i) * (i + 1) + 1;
    }

    cout << ans;

    return 0;
}