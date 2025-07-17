#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(N^2)
// S.C => O(2) => O(1)
vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (ans.size() == 0 || ans[0] != nums[i])
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[i] == nums[j])
                    cnt++;
            }
            if (cnt > floor(n / 3))
                ans.pb(nums[i]);
        }
        if (ans.size() == 2)
            break;
    }
    return ans;
}

// T.C => O(2N)
// S.C => O(N)
vector<int> majorityElement1(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int num : nums)
        mp[num]++;
    for (const auto &[el, cnt] : mp)
    {
        if (cnt > floor(n / 3))
        {
            ans.pb(el);
        }
    }
    return ans;
}

// T.C => O(N)
// S.C => O(N)
vector<int> majorityElement2(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    unordered_map<int, int> mp;
    int mini = floor(n / 3) + 1;
    for (int num : nums)
    {
        mp[num]++;
        if (mp[num] == mini)
        {
            ans.push_back(num);
        }
    }

    return ans;
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

        vector<int> ans = majorityElement2(v);
        for (int x : ans)
            cout << x << " ";
        cout << nline;
    }
    return 0;
}