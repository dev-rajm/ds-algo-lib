#include <bits/stdc++.h>
using namespace std;

// type definations
typedef set<int> si;
typedef vector<int> vi;
typedef stack<int> sti;
typedef map<int, int> mpp;
typedef unordered_map<int, int> umpp;
typedef queue<int> qi;
typedef priority_queue<int> pqi;

// Using Set
int getCommon1(vi &nums1, vi &nums2)
{
    si s1(nums1.begin(), nums1.end());
    int ans = -1;

    for (int num : nums2)
    {
        if (s1.find(num) != s1.end())
        {
            ans = num;
            break;
        }
    }
    return ans;
}

// Using two pointers
int getCommon2(vi &nums1, vi &nums2)
{
    int i = 0, j = 0;
    int m = nums1.size(), n = nums2.size();

    while (i < m && j < n)
    {
        if (nums1[i] == nums2[j])
            return nums1[i];
        else if (nums1[i] < nums2[j])
            i++;
        else
            j++;
    }
    return -1;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n, m;
        vi nums1(n);
        vi nums2(m);
        for (int i = 0; i < n; i++)
        {
            cin >> nums1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> nums2[i];
        }

        int answer = getCommon2(nums1, nums2);
        cout << answer << "\n";
    }
    return 0;
}