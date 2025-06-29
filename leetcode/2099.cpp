#include <bits/stdc++.h>
using namespace std;

bool comp1(pair<int, int> &a, pair<int, int> &b) { return a.first > b.first; }
bool comp2(pair<int, int> &a, pair<int, int> &b) { return a.second < b.second; }

// T.C => O(NlogN)
// S.C => O(N+K)
vector<int> maxSubsequence(vector<int> &nums, int k)
{
    vector<pair<int, int>> vp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
        vp.emplace_back(nums[i], i);
    sort(vp.begin(), vp.end(), comp1);

    vector<pair<int, int>> topK(vp.begin(), vp.begin() + k);
    sort(topK.begin(), topK.end(), comp2);

    vector<int> result;
    for (auto &num : topK)
        result.push_back(num.first);

    return result;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> answer = maxSubsequence(arr, k);
        for (int num : answer)
            cout << num << " ";
        cout << "\n";
    }
    return 0;
}