#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int minimumArea(vector<vector<int>> &grid)
{
    int rows = grid.size();
    int cols = grid[0].size();

    int minRow = rows, maxRow = -1;
    int minCol = cols, maxCol = -1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (grid[i][j] == 1)
            {
                minRow = min(minRow, i);
                maxRow = max(maxRow, i);
                minCol = min(minCol, j);
                maxCol = max(maxCol, j);
            }
        }
    }

    return (maxRow - minRow + 1) * (maxCol - minCol + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt, m, n;
    cin >> tt;

    while (tt--)
    {
        cin >> m >> n;
        vector<vector<int>> mat(m, vector<int>(n));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }
        cout << minimumArea(mat) << nline;
    }
    return 0;
}