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
    ll tt;
    cin >> tt;
    string p, h;

    while (tt--)
    {
        cin >> p >> h;

        string temp_hash = h;
        sort(all(p));

        int flag = 0;
        for (int i = 0; i < h.size(); i++)
        {
            string sub = temp_hash.substr(i, p.size());
            sort(all(sub));
            string subsort = sub;
            if (p == sub)
            {
                flag = 1;
                break;
            }
            sub = h;
        }

        cout << (flag == 1 ? "YES\n" : "NO\n");
    }
    return 0;
}