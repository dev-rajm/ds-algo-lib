#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll a, b, n;
  cin >> a >> b >> n;
  if ((n * b) <= a) {
    cout << "1\n";
  } else if (a == b) {
    cout << "1\n";
  } else {
    cout << "2\n";
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
