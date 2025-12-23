#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  int mc = 0, c = 0;
  for (int i = 1; i < n; i++) {
    if (s[i - 1] == s[i]) {
      c++;
    } else {
      c = 0;
    }
    mc = max(mc, c);
  }
  cout << mc + 1;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
