#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }
  int xr = accumulate(a, a + n, 0, [](int x, int y) { return x ^ y; }) ^
           accumulate(b, b + n, 0, [](int x, int y) { return x ^ y; });
  if (xr == 0) {
    cout << "Tie\n";
    return;
  }
  for (int i = n - 1; i >= 0; --i) {
    if (a[i] ^ b[i]) {
      cout << ((i % 2) ? "Mai" : "Ajisai") << "\n";
      break;
    }
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
