#include <bits/stdc++.h>
using namespace std;

int countDigitOne(int n)
{
    int cnt = 0;
    string numStr = "";

    for (int i = 0; i <= n; i++)
        numStr += to_string(i);

    for (char ch : numStr)
    {
        if (ch == '1')
            cnt++;
    }
    return cnt;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        cout << countDigitOne(n) << "\n";
    }
    return 0;
}