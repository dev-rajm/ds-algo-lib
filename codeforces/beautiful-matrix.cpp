#include <bits/stdc++.h>
using namespace std;

int beautifulMatrix(vector<vector<int>> matrix)
{
    int m = 5, n = 5;
    int atRow = 0, atCol = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1)
            {
                atRow = i + 1;
                atCol = j + 1;
                break;
            }
        }
    }

    return abs(3 - atRow) + abs(3 - atCol);
}

int main()
{
    vector<vector<int>> matrix(5, vector<int>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << beautifulMatrix(matrix);

    return 0;
}