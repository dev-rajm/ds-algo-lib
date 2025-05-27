#include <bits/stdc++.h>
using namespace std;

// T.C => O(m+n)
int countNegatives(vector<vector<int>> &grid)
{
    int cnt = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] < 0)
                cnt++;
        }
    }

    return cnt;
}

// T.C => O(m+n)
int optimalCountNegatives(vector<vector<int>> &grid)
{
    int rows = grid.size(), cols = grid[0].size();
    int r = rows - 1, c = 0, cnt = 0;

    while (r >= 0 && c < cols)
    {
        if (grid[r][c] < 0)
        {
            cnt += cols - c; // All elements in this row after c are negative
            r--;             // move row up
        }
        else
        {
            c++; // move right column
        }
    }
    return cnt;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];
        }

        cout << optimalCountNegatives(grid) << "\n";
    }
}