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
    string s;
    cin >> s;

    ll n = stoll(s, nullptr, 2);
    cout << ceil((double)log(n) / (double)log(4));
    return 0;
}