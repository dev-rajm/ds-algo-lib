#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll x, n;
  cin >> x >> n;
  int rem = n % 4;
  for (int i = 1; i <= rem; i++) {
    if ((x % 2) == 0) {
      x -= (n - rem + i);
    } else {
      x += (n - rem + i);
    }
  }
  cout << x << "\n";
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
