#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  int n;
  cin >> n;
  int a[n];
  ll ans = 0;
  ll sum = 0;
  ll max_val = 0;
  for (int i = 1; i <= n; i++) {
    max_val = max(max_val, -(ll)i * i + i + sum);
    cin >> a[i - 1];
    sum += a[i - 1];
    ans = max(ans, (ll)i * i + i - sum + max_val);
  }
  cout << ans + sum << "\n";
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
