#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

char kthCharacter(ll k, vector<int> &operations)
{
    int shift = 0;
    vector<ll> v;
    ll len = 1;

    for (int op : operations)
    {
        len *= 2;
        v.pb(len);
        if (len >= k)
            break;
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        ll half = v[i] / 2;
        int op = operations[i];
        if (k > half)
        {
            k -= half;
            if (op == 1)
                shift++;
        }
    }

    return (char)((('a' - 'a' + shift) % 26) + 'a');
}

char kthCharacter1(ll k, vector<int> &operations)
{
    int n = operations.size();
    int shift = 0;
    while (k > 1)
    {
        ll len = 1;
        for (int i = 0; i < n; i++)
        {
            len *= 2;
            if (len >= k)
            {
                shift += operations[i];
                k -= len / 2;
                break;
            }
        }
    }

    return 'a' + shift % 26;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int k, n;
        cin >> k >> n;

        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        cout << kthCharacter(k, v) << nline;
    }
    return 0;
}