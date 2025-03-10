class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        map<int, int> mp;
        for (int num : nums)
        {
            mp[num]++;
        }
        vector<int> result;
        for (const auto &[num, count] : mp)
        {
            if (count > abs(n / 3))
            {
                result.emplace_back(num);
            }
        }
        return result;
    }
};