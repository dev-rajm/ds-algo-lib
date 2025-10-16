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
    string s;
    cin >> s;

    bool all_upper = true;
    bool expect_first_upper = islower(s[0]);
    for(int i=0; i<s.size(); i++) {
        if(islower(s[i])) all_upper = false;
        if(i>0 && islower(s[i])) expect_first_upper = false;
    }

    if (all_upper || expect_first_upper)
    {
        for (char &ch : s)
        {
            ch ^= 32;
        }
    }
    cout << s;

    return 0;
}