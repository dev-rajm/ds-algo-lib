#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// brute force approach
// T.C => O(N^3 * log(number of unique triplets))
// S.C => O(2*number of unique triplets)
vector<vector<int>> threeSum(vector<int> &nums)
{
    set<vector<int>> st;
    int i, j, k;
    int n = nums.size();
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(all(temp));
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(all(st));
    return ans;
}

// better approach
// T.C => O(N^2 * logM)
// S.C => O(N + 2 x number of unique triplet)
vector<vector<int>> threeSum1(vector<int> &nums)
{
    set<vector<int>> st;
    int i, j, third;
    int n = nums.size();
    for (i = 0; i < n; i++)
    {
        set<int> hashset;
        for (j = i + 1; j < n; j++)
        {
            third = -(nums[i] + nums[j]);
            if (hashset.find(third) != hashset.end())
            {
                vector<int> temp = {nums[i], nums[j], third};
                sort(all(temp));
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(all(st));
    return ans;
}

// Optimal approach
// T.C => O(n log n) + O(n^2)
// S.C => O(1)
vector<vector<int>> threeSum2(vector<int> &nums)
{
    vector<vector<int>> ans;
    int n = nums.size();

    sort(all(nums));

    for (int i = 0; i < n; i++)
    {
        if (i != 0 && nums[i] == nums[i - 1])
            continue;

        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.pb(temp);
                j++, k--;
                while (j < k && nums[j] == nums[j - 1])
                    j++;
                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
        }
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
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        vector<vector<int>> ans = threeSum2(a);
        for (auto x : ans)
        {
            for (auto y : x)
                cout << y << " ";
            cout << nline;
        }
        cout << nline;
    }
    return 0;
}