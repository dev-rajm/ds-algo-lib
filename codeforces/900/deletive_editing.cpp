#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s, t;
  cin >> s >> t;
  int n = s.size();
  int m = t.size();
  vector<int> ft(26, 0);
  for (int i = 0; i < m; i++) {
    ft[t[i] - 'A']++;
  }
  for (int i = n - 1; i >= 0; i--) {
    if (ft[s[i] - 'A'] > 0) {
      ft[s[i] - 'A']--;
    } else {
      s[i] = '.';
    }
  }
  string ans = "";
  for (int i = 0; i < n; i++) {
    if (s[i] != '.') {
      ans += s[i];
    }
  }
  if (ans == t) {
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
