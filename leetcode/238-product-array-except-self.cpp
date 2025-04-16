#include <bits/stdc++.h>
using namespace std;

// Brute force
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> answer(n);
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                product *= nums[j];
            }
        }
        answer[i] = product;
    }
    return answer;
}

// Better approach
vector<int> productExceptSelf2(vector<int> &nums)
{
    int n = nums.size();
    vector<int> answer(n);
    vector<int> left_product(n);
    vector<int> right_product(n);

    left_product[0] = 1;
    for (int i = 1; i < n; i++)
    {
        left_product[i] = left_product[i - 1] * nums[i - 1];
    }

    right_product[n-1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        right_product[i] = right_product[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        answer[i] = left_product[i] * right_product[i];
    }
    return answer;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        vector<int> ans = productExceptSelf2(nums);
        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}