#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n, i, j, k;
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));
    vector<vector<int>> mat2(m, vector<int>(n, 1));
    vector<bool> rows(m, false), cols(n, false);
    // Array B
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }
    // Array A
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (rows[i] || cols[j])
            {
                mat2[i][j] = 0;
            }
        }
    }

    // Checking
    bool isValid = true;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            int val = 0;
            for (k = 0; k < n; k++)
                val |= mat2[i][k]; // row or
            for (k = 0; k < m; k++)
                val |= mat2[k][j]; // col or

            if (val != mat[i][j])
            {
                isValid = false;
            }
        }
    }

    if (!isValid)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << mat2[i][j] << " ";
            }
            cout << nline;
        }
    }

    return 0;
}