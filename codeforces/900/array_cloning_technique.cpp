#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  map<int, int> ump;
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    ump[b]++;
  }
  int ma = 0;
  for (auto &p : ump) {
    ma = max(ma, p.second);
  }

  int ans = 0;
  while (ma < n) {
    int d = min(n - ma, ma);
    ans += 1 + d;
    ma += d;
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
