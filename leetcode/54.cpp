#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(n^2)
// S.C => O(n^2)
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;

    vector<int> ans;

    while (top <= bottom && left <= right)
    {
        // left -> right
        for (int i = left; i <= right; i++)
            ans.pb(matrix[top][i]);
        top++;

        // top -> bottom
        for (int i = top; i <= bottom; i++)
            ans.pb(matrix[i][right]);
        right--;

        // right -> left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                ans.pb(matrix[bottom][i]);
            bottom--;
        }

        // bottom -> top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                ans.pb(matrix[i][left]);
            left++;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        }

        vector<int> answer = spiralOrder(matrix);
        for (int x : answer)
            cout << x << " ";
        cout << nline;
    }
    return 0;
}