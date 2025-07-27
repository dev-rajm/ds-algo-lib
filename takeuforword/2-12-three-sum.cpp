#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(N^3 * log(no of unique triplets))
// S.C => 2*O(no of unique triplets)
vector<vector<int>> threeSum(vector<int> &nums)
{
    int i, j, k;
    int n = nums.size();
    set<vector<int>> st;

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

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

vector<vector<int>> threeSum1(vector<int> &nums)
{
    int i, j;
    int n = nums.size();
    set<vector<int>> st;

    for (i = 0; i < n; i++)
    {
        set<int> hashset;
        for (j = i + 1; j < n; j++)
        {
            int third = -(nums[i] + nums[j]);
            if (hashset.find(third) != hashset.end())
            {
                vector<int> temp = {nums[i], nums[j], third};
                sort(all(temp));
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll tt, n;
    cin >> tt;

    while (tt--)
    {
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        vector<vector<int>> ans = threeSum1(a);
        for (auto list : ans)
        {
            for (auto num : list)
            {
                cout << num << " ";
            }
            cout << nline;
        }
        cout << nline;
    }
    return 0;
}