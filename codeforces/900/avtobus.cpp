#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll n;
  cin >> n;
  if ((n % 2) == 1 || n < 4) {
    cout << "-1\n";
  } else {
    // max_bus = ceil(n/6)
    // min_bus = n/4
    cout << (n + 6 - 1) / 6 << " " << (n / 4) << "\n";
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
