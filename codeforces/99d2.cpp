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
    int n;
    cin >> n;
    vector<int> days(7);
    for (int i = 0; i < 7; i++)
        cin >> days[i];

    int i = 0;
    while (n > 0)
    {
        n -= days[i];
        if (n <= 0)
            break;
        i = (i + 1) % 7;
    }

    cout << i + 1;

    return 0;
}