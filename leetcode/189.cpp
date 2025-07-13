#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(N+K)
// S.C => O(N-K)
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> temp(n - k);
    for (int i = 0; i < n - k; i++)
        temp[i] = nums[i];

    for (int i = n - k; i < n; i++)
        nums[i - (n - k)] = nums[i];

    for (int i = k; i < n; i++)
        nums[i] = temp[i - k];
}

// T.C => O(3N)
// S.C => O(1)
void rotate1(vector<int> &nums, int k)
{
    int n = nums.size();
    int d = k % n;
    reverse(nums.begin(), nums.begin() + n - d);
    reverse(nums.begin() + n - d, nums.end());
    reverse(all(nums));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        rotate(v, k);

        for (int x : v)
            cout << x << " ";
        cout << nline;
    }
    return 0;
}