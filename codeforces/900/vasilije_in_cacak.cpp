#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll n, k, x;
  cin >> n >> k >> x;
  ll ans = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
  if (ans >= x && x >= k * (k + 1) / 2) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
