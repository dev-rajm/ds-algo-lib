#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

struct Casino
{
    int l, r, real;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<Casino> grid(n);
        for (int i = 0; i < n; i++)
        {
            cin >> grid[i].l >> grid[i].r >> grid[i].real;
        }

        vector<bool> visited(n, false);
        int currCoin = k;

        while (true)
        {
            int bestIdx = -1;
            int bestReal = -1;

            for (int i = 0; i < n; i++)
            {
                if (!visited[i] && currCoin >= grid[i].l && currCoin <= grid[i].r)
                {
                    if (grid[i].real > bestReal)
                    {
                        bestReal = grid[i].real;
                        bestIdx = i;
                    }
                }
            }

            if (bestIdx == -1)
                break;

            visited[bestIdx] = true;
            currCoin = grid[bestIdx].real;
        }

        cout << currCoin << nline;
    }

    return 0;
}