#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  int a[n];
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i > 0 && a[i - 1] > a[i]) {
      ans += (a[i - 1] - a[i]);
      a[i] = a[i - 1];
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
