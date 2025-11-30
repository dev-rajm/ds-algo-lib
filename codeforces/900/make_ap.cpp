#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;
  bool ans = false;
  ll na = 2 * b - c;
  if (na / a > 0 && na % a == 0) {
    ans = true;
  }
  ll nb = (a + c) / 2;
  if (nb / b > 0 && nb % b == 0 && (c - a) % 2 == 0) {
    ans = true;
  }
  ll nc = 2 * b - a;
  if (nc / c > 0 && nc % c == 0) {
    ans = true;
  }
  cout << (ans ? "YES" : "NO") << "\n";
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
