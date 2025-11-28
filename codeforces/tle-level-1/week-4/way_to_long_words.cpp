#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;

  int n = s.size();
  if (n > 10) {
    cout << s[0] << n - 2 << s[n - 1] << "\n";
  } else {
    cout << s << "\n";
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
