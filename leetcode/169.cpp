#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(n^2)
// S.C => O(1)
int majorityElement(vector<int> &nums)
{
    int cnt, i, j, n = nums.size();
    for (i = 0; i < n; i++)
    {
        cnt = 0;
        for (j = 0; j < n; j++)
        {
            if (nums[j] == nums[i])
            {
                cnt++;
            }
        }

        if (cnt > (n / 2))
        {
            return nums[i];
        }
    }
    return -1;
}

// T.C => O(2N)
// S.C => O(N)
int majorityElement1(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    for (int x : nums)
    {
        mp[x]++;
    }

    for (auto &[el, cnt] : mp)
    {
        if (cnt > (n / 2))
        {
            return el;
        }
    }
    return -1;
}

// Moore's Voting Algorithm
// T.C => O(n) + O(n)
// S.C => O(1)
int majorityElement2(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0, el;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            el = nums[i];
        }
        else if (nums[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    // return el;
    // if there was a tendency of array may not have any majority element
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == el)
            cnt1++;
    }

    if (cnt1 > (n / 2))
        return el;
    return -1;
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
        {
            cin >> x;
        }

        cout << majorityElement1(v) << nline;
    }
    return 0;
}