#include "precompiled.hpp"
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

char kthCharacter(int k)
{
    string s = "a";
    while (s.length() < k)
    {
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            char ch = 'a' + ((s[i] - 'a' + 1) % 26);
            s += ch;
        }
    }
    return s[k - 1];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        cout << kthCharacter(n) << nline;
    }
    return 0;
}