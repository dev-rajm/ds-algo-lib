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

    ll n, m, a;
    cin >> n >> m >> a;

    ll req_flagstone = ceil((double)m / (double)a) * ceil((double)n / (double)a);

    cout << req_flagstone;

    return 0;
}