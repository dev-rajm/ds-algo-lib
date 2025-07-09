#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(n^2)
// S.C => O(n)
vector<int> leadersInArray(vector<int> &v)
{
    int n = v.size();
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] > v[i])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
            result.pb(v[i]);
    }

    return result;
}

// T.C => O(n)
// S.C => O(n)
vector<int> leadersInArray1(vector<int> &v)
{
    int n = v.size();
    int maxi = INT_MIN;
    vector<int> result;

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > maxi)
        {
            result.pb(v[i]);
            maxi = v[i];
        }
    }

    reverse(all(result));

    return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        vector<int> answer = leadersInArray1(v);
        for (int x : answer)
            cout << x << " ";
        cout << nline;
    }
    return 0;
}