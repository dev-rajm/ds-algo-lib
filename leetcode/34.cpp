#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

vector<int> searchRange(vector<int> &nums, int target)
{
    int n = nums.size();
    int l = 0, h = n - 1;
    int first = -1, last = -1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (nums[mid] == target)
        {
            first = last = mid;
            while (first > 0 && nums[first - 1] == target)
                first--;
            while (last < n - 1 && nums[last + 1] == target)
                last++;
            return {first, last};
        }
        else if (nums[mid] < target)
            l = mid + 1;
        else
            h = mid - 1;
    }

    return {-1, -1};
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

        vector<int> result = searchRange(a, target);
        for (int x : result)
            cout << x << " ";
        cout << nline;
    }
    return 0;
}