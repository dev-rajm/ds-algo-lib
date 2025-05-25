#include <bits/stdc++.h>
using namespace std;

int maximumGap(vector<int> &nums)
{
    set<int> st(nums.begin(), nums.end());
    if (st.size() < 2)
        return 0;

    int gap = 0;
    for (auto it = st.begin(); next(it) != st.end(); it++)
        gap = max(gap, *next(it) - *it);

    return gap;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << maximumGap(arr) << "\n";
    }
    return 0;
}