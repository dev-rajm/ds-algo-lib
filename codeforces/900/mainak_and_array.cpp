#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = a[n - 1] - a[0];
  for (int i = 1; i < n; i++) {
    ans = max(ans, a[i] - a[0]);
  }
  for (int i = 0; i < n - 1; i++) {
    ans = max(ans, a[n - 1] - a[i]);
  }
  for (int i = 0; i < n-1; i++) {
    ans = max(ans, a[i] - a[i + 1]);
  }
  cout << ans << "\n";
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
