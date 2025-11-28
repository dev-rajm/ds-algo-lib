#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  sort(s.begin(), s.end());
  string t = "";
  for (int i = 0; i < n; i++) {
    if (s[i] != '+') {
      t += s[i];
      if (i < n - 1) {
        t += '+';
      }
    }
  }
  cout << t;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
