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
    int k;
    string s;
    cin >> k >> s;

    map<char, int> mpp;
    for (auto ch : s)
        mpp[ch]++;

    for (auto &[ch, cnt] : mpp)
    {
        if (cnt % k != 0)
        {
            cout << "-1";
            return 0;
        }
    }

    string str = "";
    for (auto &[ch, cnt] : mpp)
    {
        str += string(cnt / k, ch);
    }

    for (int i = 1; i <= k; i++)
        cout << str;

    return 0;
}