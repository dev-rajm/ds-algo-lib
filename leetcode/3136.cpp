#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

bool isValid(string word)
{
    int n = word.size();
    if (n < 3)
        return false;

    int v = 0, c = 0;
    for (char ch : word)
    {
        if (!isalnum(ch))
            return false;

        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            v++;

        else if (isalpha(ch))
            c++;
    }

    if (v < 1 || c < 1)
        return false;

    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        string s;
        cin >> s;
        cout << isValid(s) << nline;
    }
    return 0;
}