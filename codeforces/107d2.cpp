#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k, l, c, d, p, nl, np;
        cin >> n >> k >> l >> c >> d >> p >> nl >> np;

        int total_volume = k * l;
        int toast_cnt_by_volume = total_volume / nl;
        int toast_cnt_by_lime_slices = c * d;
        int toast_cnt_by_salt = p / np;

        cout << min({toast_cnt_by_volume, toast_cnt_by_lime_slices, toast_cnt_by_salt}) / n;
    }

    return 0;
}