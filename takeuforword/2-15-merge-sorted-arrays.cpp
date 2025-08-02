#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(m+n)
// S.C => O(m+n)
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> temp(m + n);
    int left = 0, right = 0;
    int i = 0;
    while (left < m && right < n)
    {
        if (nums1[left] < nums2[right])
        {
            temp[i] = nums1[left++];
        }
        else
        {
            temp[i] = nums2[right++];
        }
        i++;
    }
    while (left < m)
        temp[i++] = nums1[left++];
    while (right < n)
        temp[i++] = nums2[right++];

    // rebuild nums1
    for (int i = 0; i < m + n; i++)
        nums1[i] = temp[i];
}

// T.C => O(n + klogk) k = m+n
// S.C => O(1)
void merge1(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        nums1[m + i] = nums2[i];
    }
    sort(all(nums1));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, m, n, i;
    cin >> tt;

    while (tt--)
    {
        cin >> m >> n;
        vector<int> a1(m + n, 0), a2(n);
        for (i = 0; i < m; i++)
            cin >> a1[i];
        for (i = 0; i < n; i++)
            cin >> a2[i];

        merge1(a1, m, a2, n);

        for (int x : a1)
            cout << x << " ";
        cout << nline;
    }
    return 0;
}