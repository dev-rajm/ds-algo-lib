#include <bits/stdc++.h>
using namespace std;

// sorting approach (T.c => O(N log N + N log N), S.C => O(1))
bool isvalid(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}

// hash table (T.C => O(3N), S.C => O(2N))
bool isvalid2(string s, string t)
{
    if (s.size() != t.size())
        return false;

    int i;
    int H[26] = {0};
    for (char ch : s)
        H[ch - 'a']++;
    for (char ch : t)
        H[ch - 'a']--;
    for (int val : H)
    {
        if (val != 0)
            return false;
    }
    return true;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        string s, t;
        cin >> s >> t;

        cout << isvalid(s, t) << "\n";
    }
    return 0;
}