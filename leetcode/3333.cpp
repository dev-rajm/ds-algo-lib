#include "precompiled.hpp"
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

static const int MOD = 1e9 + 7;

int possibleStringCount(string word, int k)
{
    if (word.empty())
        return 0;
    vector<int> groups;
    int count = 1;
    for (int i = 1; i < word.size(); ++i)
    {
        if (word[i] == word[i - 1])
            count++;
        else
        {
            groups.pb(count);
            count = 1;
        }
    }
    groups.pb(count);

    ll total = 1;
    for (int num : groups)
    {
        total = (total * num) % MOD;
    }

    if (k <= (int)groups.size())
        return total;

    vector<int> dp(k, 0);
    dp[0] = 1;
    for (int num : groups)
    {
        vector<int> newDp(k, 0);
        ll sum = 0;
        for (int s = 0; s < k; ++s)
        {
            if (s > 0)
                sum = (sum + dp[s - 1]) % MOD;
            if (s > num)
                sum = (sum - dp[s - num - 1] + MOD) % MOD;
            newDp[s] = sum;
        }
        dp = newDp;
    }

    ll invalid = 0;
    for (int s = groups.size(); s < k; ++s)
    {
        invalid = (invalid + dp[s]) % MOD;
    }
    return (total - invalid + MOD) % MOD;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int k;
        string s;
        cin >> k >> s;

        cout << possibleStringCount(s, k) << nline;
    }
    return 0;
}