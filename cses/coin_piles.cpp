#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int a, b;
  cin >> a >> b;

  ll sum = a + b;
  if ((sum % 3) == 0 && max(a, b) <= 2 * min(a, b)) {
    cout << "YES\n";
  } else {
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
