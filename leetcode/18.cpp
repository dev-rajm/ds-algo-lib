#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// Brute force approach
// T.C => O(n^4)
// S.C => O(no of quads) x 2
vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    ll sum = nums[i] + nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target)
                    {
                        vector<int> t = {nums[i], nums[j], nums[k], nums[l]};
                        sort(all(t));
                        st.insert(t);
                    }
                }
            }
        }
    }

    vector<vector<int>> ans(all(st));
    return ans;
}

// Better approach
// T.C => O(n^3)
// S.C => O(no of quads) x 2 + O(n)
vector<vector<int>> fourSum1(vector<int> &nums, int target)
{
    int n = nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<int> hashset;
            for (int k = j + 1; k < n; k++)
            {
                ll sum = nums[i] + nums[j];
                sum += nums[k];
                int forth = target - (sum);
                if (hashset.find(forth) != hashset.end())
                {
                    vector<int> t = {nums[i], nums[j], nums[k], forth};
                    sort(all(t));
                    st.insert(t);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(all(st));
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, n, target;
    cin >> tt;

    while (tt--)
    {
        cin >> n >> target;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        vector<vector<int>> ans = fourSum1(a, target);
        for (auto v : ans)
        {
            for (auto x : v)
            {
                cout << x << " ";
            }
            cout << nline;
        }
        cout << nline;
    }
    return 0;
}