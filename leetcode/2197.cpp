#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// TODO: fix needed
vector<int> replaceNonCoprimes(vector<int> &nums)
{
    stack<ll> st;
    int n = nums.size();
    int i = 0;
    while (i < n)
    {
        if (st.empty())
        {
            ll g = gcd(nums[i], nums[i + 1]);
            if (g > 1)
            {
                ll l = lcm(nums[i], nums[i + 1]);
                st.push(l);
                i += 2;
            }
            else
            {
                st.push(nums[i]);
                i++;
            }
        }
        else
        {
            ll g = gcd(st.top(), nums[i]);
            if (g > 1)
            {
                ll l = lcm(st.top(), nums[i]);
                st.pop();
                st.push(l);
                i++;
            }
            else
            {
                st.push(nums[i]);
                i++;
            }
        }
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.pb((int)st.top());
        st.pop();
    }
    reverse(all(ans));
    return ans;
}

// Clean solution
vector<int> replaceNonCoprimes1(vector<int> &nums)
{
    vector<ll> st;
    vector<int> ans;
    for (ll num : nums)
    {
        st.pb(num);
        while (st.size() >= 2)
        {
            ll a = st.back();
            st.pop_back();
            ll b = st.back();
            st.pop_back();
            if (gcd(a, b) > 1)
            {
                ll l = (a * b) / gcd(a, b);
                st.pb(l);
            }
            else
            {
                st.pb(b);
                st.pb(a);
                break;
            }
        }
    }
    ans.reserve(st.size());
    for (ll &x : st)
    {
        ans.pb((int)x);
    }
    return ans;
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
        vector<int> arr(n);
        for (int &x : arr)
        {
            cin >> x;
        }

        vector<int> ans = replaceNonCoprimes(arr);
        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << nline;
    }
    return 0;
}