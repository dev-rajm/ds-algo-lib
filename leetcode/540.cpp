#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(n)
// S.C => O(1)
int singleNonDuplicate(vector<int> &nums)
{
    int i;
    int n = nums.size();
    if (n == 1)
        return nums[0];
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (nums[i] != nums[i + 1])
                return nums[i];
        }
        else if (i == n - 1)
        {
            if (nums[i] != nums[i - 1])
                return nums[i];
        }
        else
        {
            if (nums[i] != nums[i + 1] && nums[i] != nums[i - 1])
                return nums[i];
        }
    }
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
            cin >> x;

        cout << singleNonDuplicate(arr) << nline;
    }
    return 0;
}