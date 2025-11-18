#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll k;
  cin >> k;
  ll a = k * (k - 1) + 1;
  ll ans = (k * ((2 * a) + (k - 1) * 2)) / 2;
  cout << ans;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();

  return 0;
}
