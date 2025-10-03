#include <bits/stdc++.h>
using namespace std;

vector<int> finalPrices(vector<int> &prices)
{
    int n = prices.size();
    vector<int> ans(prices);
    int i, j;
    for (i = 0; i < n; i++)
    {
        int price = prices[i];
        bool stop = false;
        for (j = i + 1; j < n && !stop; j++)
        {
            if (prices[j] <= price)
            {
                ans[i] = price - prices[j];
                stop = true;
            }
        }
        
    }
    return ans;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> vs(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vs[i];
        }
        vector<int> answer = finalPrices(vs);
        for (int price : answer)
        {
            cout << price << " ";
        }
        cout << "\n";
    }
}