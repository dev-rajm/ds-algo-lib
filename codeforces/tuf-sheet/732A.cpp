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

    int k, r, ans, i;
    cin >> k >> r;

    for (i = 1; i <= 10; i++)
    {
        int val = (i * k) % 10;
        if (val == r || val == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}