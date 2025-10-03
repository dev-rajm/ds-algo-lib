#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string t;
    cin >> t;

    string result = "";
    int j = 1;
    for (int i = 0; i <= n; i += j)
    {
        result += t[i];
        j++;
    }

    cout << result;

    return 0;
}