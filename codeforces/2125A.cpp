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
    ll tt;
    cin >> tt;

    while (tt--)
    {
        string s;
        cin >> s;
        sort(all(s));
        reverse(all(s));

        cout << s << nline;
    }
    return 0;
}