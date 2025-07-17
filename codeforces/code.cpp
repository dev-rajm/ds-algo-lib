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
    int tt;
    cin >> tt;

    while (tt--)
    {
        int x;
        cin >> x;
        int mini = x;
        int numDigit = floor(log10(abs(x))) + 1;
        while (numDigit--)
        {
            int lastDigit = x % 10;
            if (lastDigit < mini)
            {
                mini = lastDigit;
            }
            x = x / 10;
        }

        cout << mini << nline;
    }

    return 0;
}