#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        int changes = 0;
        for (int i = 0; i < n - 1; i++)
            if (grid[i][m - 1] != 'D')
                changes++;

        for (int j = 0; j < m - 1; j++)
            if (grid[n - 1][j] != 'R')
                changes++;

        cout << changes << "\n";
    }
    return 0;
}