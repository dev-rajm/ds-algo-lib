#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

void Display(int t)
{
    if (t < 10)
        cout << "0" << t;
    else
        cout << t;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string starting, ending;
    cin >> starting >> ending;

    int sh = stoi(starting.substr(0, 2));
    int sm = stoi(starting.substr(3, 2));
    int eh = stoi(ending.substr(0, 2));
    int em = stoi(ending.substr(3, 2));

    int total_sm = sh * 60 + sm;
    int total_em = eh * 60 + em;

    int mid_m = (total_sm + total_em) / 2;

    int mid_h = mid_m / 60;
    int rmid_m = mid_m - (mid_h * 60);

    Display(mid_h);
    cout << ":";
    Display(rmid_m);

    return 0;
}