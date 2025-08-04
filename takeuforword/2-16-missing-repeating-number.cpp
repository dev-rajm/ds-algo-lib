#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(N^2)
// S.C => O(1)
vector<int> missingRepeating(vector<int> &arr)
{
    int rt = -1, ms = -1;
    int n = arr.size();
    for (int i = 1; i <= n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
            if (arr[j] == i)
                c++;

        if (c > 1)
            rt = i;
        else if (c == 0)
            ms = i;

        if (rt != -1 && ms != -1)
            break;
    }

    return {rt, ms};
}

// T.C => O(2N)
// S.C => O(N)
vector<int> missingRepeating1(vector<int> &arr)
{
    int rt = -1, ms = -1;
    int n = arr.size();
    int H[n + 1] = {0};
    for (int x : arr)
        H[x]++;
    for (int i = 1; i <= n; i++)
    {
        if (H[i] == 2)
            rt = i;
        else if (H[i] == 0)
            ms = i;
        if (rt != -1 && ms != -1)
            break;
    }

    return {rt, ms};
}

// T.C => O(N)
// S.C => O(1)
vector<int> missingRepeating2(vector<int> &arr)
{
    ll n = arr.size();
    ll SN = (n * (n + 1)) / 2;
    ll S2N = (n * (n + 1) * (2 * n + 1)) / 6;
    ll S = 0, S2 = 0;
    for (int x : arr)
    {
        S += (ll)x;
        S2 += (ll)x * (ll)x;
    }

    ll val1 = S - SN;   // x - y
    ll val2 = S2 - S2N; // x^2 - y^2

    val2 /= val1; // x + y

    ll x = (val1 + val2) / 2;
    ll y = x - val1;

    return {(int)x, (int)y};
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

        vector<int> ans = missingRepeating2(a);
        for (int x : ans)
            cout << x << " ";
        cout << nline;
    }
    return 0;
}