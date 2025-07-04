#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

char kthCharacter(long long k, vector<int> &operations)
{
    int shift = 0;
    vector<long long> v;
    long long len = 1;

    for (int op : operations)
    {
        len *= op;
        v.pb(len);
        if (len >= k)
            break;
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        long long half = v[i] / 2;
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