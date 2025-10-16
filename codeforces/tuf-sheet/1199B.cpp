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

    long double H, L;
    cin >> H >> L;

    long double top = (L * L - H * H);
    long double bottom = 2 * H;

    long double x = top / bottom;

    cout << fixed << setprecision(12) << x;

    return 0;
}