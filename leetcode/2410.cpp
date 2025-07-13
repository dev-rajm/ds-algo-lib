#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(NlogN + MlogM)
// S.C => O(1)
int matchPlayersAndTrainers(vector<int> &players, vector<int> &trainers)
{
    sort(all(players));
    sort(all(trainers));

    int cnt = 0;
    int p = 0, t = 0;
    while (p < players.size() && t < trainers.size())
    {
        if (trainers[t] >= players[p])
        {
            cnt++;
            p++, t++;
        }
        else
            t++;
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> p(n);
        vector<int> t(m);
        for (int &x : p)
            cin >> x;
        for (int &x : t)
            cin >> x;
        cout << matchPlayersAndTrainers(p, t) << nline;
    }
    return 0;
}