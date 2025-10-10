#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long x, y, z;
  cin >> x >> y >> z;
  long long ab = (x|z) & (x|y);
  long long bc = (x|y) & (y|z);
  long long ac = (x|z) & (y|z);
  if (ab == x && bc == y && ac == z && min({ab, bc, ac}) >= 0) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
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
