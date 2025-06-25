#include <bits/stdc++.h>
using namespace std;

long long countLessEqual(vector<int> &nums1, vector<int> &nums2, long long mid)
{
    long long cnt = 0;
    for (int num1 : nums1)
    {
        if (num1 == 0)
        {
            if (mid >= 0)
                cnt += nums2.size();
            continue;
        }

        int l = 0, h = nums2.size();
        while (l < h)
        {
            int t = (l + h) / 2;
            long long prod = 1LL * num1 * nums2[t];
            if (prod <= mid)
            {
                if (num1 > 0)
                    l = t + 1;
                else
                    h = t;
            }
            else
            {
                if (num1 > 0)
                    h = t;
                else
                    l = t + 1;
            }
        }
        cnt += (num1 > 0) ? l : (nums2.size() - l);
    }
    return cnt;
}

long long kthSmallestProduct(vector<int> &nums1, vector<int> &nums2, long long k)
{
    long long l = -1e10, h = 1e10;
    while (l < h)
    {
        long long mid = l + (h - l) / 2;
        if (countLessEqual(nums1, nums2, mid) < k)
            l = mid + 1;
        else
            h = mid;
    }
    return l;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n1, n2;
        long long k;
        cin >> n1 >> n2;
        cin >> k;

        vector<int> arr1(n1), arr2(n2);

        for (int i = 0; i < n1; i++)
            cin >> arr1[i];
        for (int i = 0; i < n2; i++)
            cin >> arr2[i];

        cout << kthSmallestProduct(arr1, arr2, k) << "\n";
    }

    return 0;
}