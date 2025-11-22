#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  int k = 0;
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    k = __gcd(k, abs(x - i));
  }
  cout << k << "\n";
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
