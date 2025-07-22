#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int maximumUniqueSubarray(vector<int> &nums)
{
    unordered_set<int> st;
    int sum = 0, max_sum = 0;
    int n = nums.size();
    int i = 0, j = 0;
    while (j < n)
    {
        while (st.count(nums[j]) > 0)
        {
            st.erase(nums[i]);
            sum -= nums[i];
            i++;
        }
        sum += nums[j];
        st.insert(nums[j++]);

        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        cout << maximumUniqueSubarray(a) << nline;
    }
    return 0;
}