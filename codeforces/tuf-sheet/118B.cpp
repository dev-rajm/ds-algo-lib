#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // top
    for (int i = 0; i <= n; i++)
    {
        // spaces
        for (int k = 0; k < 2 * (n - i); k++)
        {
            cout << " ";
        }

        // left numbers
        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (j != i)
                cout << " ";
        }

        // right number
        for (int j = i - 1; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << nline;
    }

    // bottom
    for (int i = n - 1; i >= 0; i--)
    {
        // spaces
        for (int k = 2 * (n - i); k > 0; k--)
        {
            cout << " ";
        }

        // left numbers
        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (j != i)
                cout << " ";
        }

        // // right number
        for (int j = i - 1; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << nline;
    }

    return 0;
}