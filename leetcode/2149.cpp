#include <bits/stdc++.h>
using namespace std;

// T.C => O(N + N/2)
// S.C => O(N)
vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
            neg.push_back(nums[i]);
        else
            pos.push_back(nums[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        nums[2 * i] = pos[i];
        nums[2 * i + 1] = neg[i];
    }

    return nums;
}

// T.C =>
// S.C =>
vector<int> rearrangeArray2(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res(n, 0);
    int posIndx = 0, negIndx = 1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            res[posIndx] = nums[i];
            posIndx += 2;
        }
        else
        {
            res[negIndx] = nums[i];
            negIndx += 2;
        }
    }

    return res;
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
            cin >> arr[i];

        vector<int> answer = rearrangeArray2(arr);
        for (int num : answer)
            cout << num << " ";
        cout << "\n";
    }
    return 0;
}