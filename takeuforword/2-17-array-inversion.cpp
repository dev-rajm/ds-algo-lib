#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(N^2)
// S.C => O(1)
int countInversion(vector<int> a)
{
    int n = a.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
                count++;
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n;
    cin >> tt;

    while (tt--)
    {
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        cout << countInversion(a) << nline;
    }
    return 0;
}