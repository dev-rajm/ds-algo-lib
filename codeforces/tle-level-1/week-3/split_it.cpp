#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  if (k == 0) {
    cout << "YES\n";
    return;
  }
  for (int i = 0; i < k; i++) {
    if (s[i] != s[n - i - 1]) {
      cout << "NO\n";
      return;
    }
  }
  cout << (2 * k < n ? "YES\n" : "NO\n");
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
