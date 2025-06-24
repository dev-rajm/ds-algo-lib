#include <bits/stdc++.h>
using namespace std;

// T.C => O(N + N^M)
// S.C => O(2N)
vector<int> findKDistantIndices(vector<int> &nums, int key, int k)
{
    int n = nums.size();
    vector<int> indx;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == key)
        {
            indx.push_back(i);
        }
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < indx.size(); j++)
        {
            int val = abs(i - indx[j]);
            if (val <= k && nums[indx[j]] == key)
            {
                ans.push_back(i);
                break;
            }
        }
    }
    return ans;
}

// T.C => O(N + N)
// S.C => O(N + N)
vector<int> findKDistantIndices2(vector<int> &nums, int key, int k)
{
    int n = nums.size();
    vector<int> H(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == key)
        {
            int st = max(0, i - k);
            int nd = min(n - 1, i + k);
            for (int j = st; j <= nd; j++)
                H[j] = 1;
        }
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (H[i])
            ans.push_back(i);
    }
    return ans;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, key, k;
        cin >> n >> key >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> ans = findKDistantIndices2(arr, key, k);
        for (int num : ans)
            cout << num << " ";
        cout << "\n";
    }
    return 0;
}