#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int ans = 0;
  int lnt = -1e9;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      lnt = i;
    } else {
      if (i > lnt + k) {
        ans++;
      }
    }
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
