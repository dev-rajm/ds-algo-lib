#include "precompiled.hpp"
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(k)
// S.C => O(k)
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
    cout << s << nline;
    return s[k - 1];
}

// T.C => O(1)
// S.C => O(1)
char kthCharacter1(int k)
{
    // Use a long string (result of k=500)
    return ("abbcbccdbccdcddebccdcddecddedeefbccdcddecddedeefcddedeefdeefeffgbccdcddecddedeefcddedeefdeefeffgcddedeefdeefeffgdeefeffgeffgfgghbccdcddecddedeefcddedeefdeefeffgcddedeefdeefeffgdeefeffgeffgfgghcddedeefdeefeffgdeefeffgeffgfgghdeefeffgeffgfggheffgfgghfgghghhibccdcddecddedeefcddedeefdeefeffgcddedeefdeefeffgdeefeffgeffgfgghcddedeefdeefeffgdeefeffgeffgfgghdeefeffgeffgfggheffgfgghfgghghhicddedeefdeefeffgdeefeffgeffgfgghdeefeffgeffgfggheffgfgghfgghghhideefeffgeffgfggheffgfgghfgghghhieffgfgghfgghghhifgghghhighhihiijh")[k - 1];
}

// T.C => O(number of bits)
// S.C => O(1)
char kthCharacter2(int k)
{
    return (char)('a' + __builtin_popcount(k - 1));
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
        cout << kthCharacter1(n) << nline;
    }
    return 0;
}