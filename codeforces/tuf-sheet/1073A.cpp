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
    string s;
    cin >> n >> s;

    bool all_same = true;
    for (i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            all_same = false;
            break;
        }
    }

    if (all_same)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        cout << s[i];
        cout << s[i + 1];
    }

    return 0;
}