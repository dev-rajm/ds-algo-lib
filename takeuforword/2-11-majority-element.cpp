#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(N^2)
// S.C => O(1)
vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int i, j, k;
    vector<int> v;
    for (i = 0; i < n; i++)
    {
        if (v.size() == 0 || v[0] != nums[i])
        {
            int count = 0;
            for (j = 0; j < n; j++)
            {
                if (nums[j] == nums[i])
                    count++;
            }
            if (count > n / 3)
                v.pb(nums[i]);
        }
        if (v.size() == 2)
            break;
    }
    return v;
}

// T.C => O(NlogN)
// S.C => O(N)
vector<int> majorityElement1(vector<int> &nums)
{
    unordered_map<int, int> mp;
    vector<int> ls;

    int n = nums.size();
    int mini = (int)(n / 3) + 1;

    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
        if (mp[nums[i]] == mini)
            ls.pb(nums[i]);

        if (ls.size() == 2)
            break;
    }

    sort(all(ls));
    return ls;
}

// Elimination Rule
// T.C => O(N)
// S.C => O(1)
vector<int> majorityElement2(vector<int> &nums)
{
    int i, n = nums.size();
    int counter1 = 0, counter2 = 0, element1, element2;

    for (i = 0; i < n; i++)
    {
        if (counter1 == 0 && element2 != nums[i])
        {
            counter1 = 1;
            element1 = nums[i];
        }
        else if (counter2 == 0 && element1 != nums[i])
        {
            counter2 = 1;
            element2 = nums[i];
        }
        else if (element1 == nums[i])
            counter1++;
        else if (element2 == nums[i])
            counter2++;
        else
        {
            counter1--;
            counter2--;
        }
    }

    // manual check
    vector<int> ls;
    int cnt1 = 0, cnt2 = 0;

    for (i = 0; i < n; i++)
    {
        if (element1 == nums[i])
            cnt1++;
        if (element2 == nums[i])
            cnt2++;
    }

    int mini = (int)(n / 3) + 1;
    if (cnt1 >= mini)
        ls.pb(element1);
    if (cnt2 >= mini)
        ls.pb(element2);

    sort(all(ls));
    return ls;
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

        vector<int> ans = majorityElement2(a);
        for (int x : ans)
            cout << x << " ";
        cout << nline;
    }
    return 0;
}