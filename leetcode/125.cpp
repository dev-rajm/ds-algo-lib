#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int n=s.size();
    int l=0, h=n-1;
    while(l<h) {
        while(l<h && !isalnum(s[l]))
            l++;
        while(l<h && !isalnum(s[h]))
            h--;
        if(l<h && tolower(s[l]) != tolower(s[h]))
            return false;
        l++, h--;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isPalindrome(s) << endl;
    }
    return 0;
}