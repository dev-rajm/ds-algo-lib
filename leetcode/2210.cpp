#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int countHillValley(vector<int> &nums)
{
    int count = 0;
    int i, j, n = nums.size();
    for (i = 1, j = 0; i < n - 1; i++)
    {
        if ((nums[j] < nums[i] && nums[i] > nums[i + 1]) || (nums[j] > nums[i] && nums[i] < nums[i + 1]))
        {
            count++;
            j = i;
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt, n;
    cin >> tt;

    while (tt--)
    {
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        cout << countHillValley(a) << nline;
    }
    return 0;
}