#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int row, col;
    bool flag = false;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= m; col++)
        {
            if (row % 2 == 0)
            {
                if (!flag)
                {
                    while (col <= m - 1)
                    {
                        cout << ".";
                        col++;
                    }
                    cout << "#";
                    flag = true;
                }
                else
                {
                    cout << "#";
                    while (col+1 <= m)
                    {
                        cout << ".";
                        col++;
                    }
                    flag = false;
                }
            }
            else
            {
                cout << "#";
            }
        }
        cout << "\n";
    }

    return 0;
}