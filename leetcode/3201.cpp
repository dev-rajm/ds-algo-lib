#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int maximumLength(vector<int> &nums)
{
    int cnt_even = 0, cnt_odd = 0;
    for (int num : nums)
    {
        if (num % 2 == 0)
            cnt_even++;
        else
            cnt_odd++;
    }

    int even_dp = 0, odd_dp = 0;
    for (int num : nums)
    {
        if (num % 2 == 0)
            even_dp = max(even_dp, odd_dp + 1);
        else
            odd_dp = max(odd_dp, even_dp + 1);
    }

    return max({cnt_even, cnt_odd, even_dp, odd_dp});
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

        cout << maximumLength(v) << nline;
    }
    return 0;
}