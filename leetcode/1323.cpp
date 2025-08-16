#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int maximum69Number(int num)
{
    string s_num = to_string(num);
    for (char &ch : s_num)
    {
        if (ch == '6')
        {
            ch = '9';
            break;
        }
    }
    return stoi(s_num);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, num;
    cin >> tt;

    while (tt--)
    {
        cin >> num;
        cout << maximum69Number(num) << nline;
    }
    return 0;
}