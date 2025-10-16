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
    ll n, i, a, b;
    cin >> n;

    b = floor(n / 7);
    int fours = 0, sevens = 0, found = 0;
    for (int i = b; i >= 0; i--)
    {
        a = n - i * 7;
        if (a >= 0 && a % 4 == 0)
        {
            fours = a / 4;
            sevens = i;
            found = 1;
            break;
        }
    }

    string ans = "";
    for (i = 1; i <= fours; i++)
        ans += "4";
    for (i = 1; i <= sevens; i++)
        ans += "7";
    cout << (found == 1 ? ans : "-1") << nline;

    return 0;
}