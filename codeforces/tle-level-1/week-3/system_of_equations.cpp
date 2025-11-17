#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll n, m;
  cin >> n >> m;
  ll ans = 0;
  for (ll a = 0; a * a <= n; a++) {
    for (ll b = 0; b * b <= m; b++) {
      if (((a * a + b) == n) && ((b * b + a) == m)) {
        ans++;
      }
    }
  }
  cout << ans;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();

  return 0;
}
