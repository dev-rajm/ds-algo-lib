#include "precompiled.hpp"
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> v;
        int curr = n;
        for (int i = n - 1; i >= 1; i--)
        {
            v.emplace_back(curr, i);
            curr = (curr + i + 1) / 2;
        }
        cout << curr << nline;

        for (auto &[a, b] : v)
            cout << a << " " << b << nline;
    }
    return 0;
}