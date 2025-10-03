#include <bits/stdc++.h>
using namespace std;

int equalPairs(vector<vector<int>> &grid)
{
    int cnt = 0;
    int n = grid.size();
    vector<int> row, col;
    for (int i = 0; i < n; i++)
    {
        row = grid[i];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                col.push_back(grid[k][j]);
            }
            if (row == col)
            {
                cnt++;
            }
            col.clear();
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> grid(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            grid[i].push_back(x);
        }
    }
    cout << equalPairs(grid);
}