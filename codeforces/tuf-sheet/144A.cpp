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

    vector<int> a(n);

    int mini = 0;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= a[mini])
            mini = i;
        if (a[i] > a[maxi])
            maxi = i;
    }

    int moves = maxi + (n - 1 - mini);
    if (maxi > mini)
        moves--;

    cout << moves;

    return 0;
}