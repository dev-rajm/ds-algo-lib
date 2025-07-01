#include "precompiled.hpp"
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int possibleStringCount(string word)
{
    int cnt = 1;
    for(int i=0; i<word.size()-1; i++) {
        if(word[i] == word[i+1])
            cnt += 1;
    }
    
    return cnt;
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

        cout << possibleStringCount(s) << nline;
    }
    return 0;
}