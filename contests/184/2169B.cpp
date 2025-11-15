#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  int c1 = 0, c2 = 0, c3 = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '<')
      c1++;
    else if (s[i] == '*')
      c2++;
    else
      c3++;
  }
  string chk = string(c1, '<') + string(c2, '*') + string(c3, '>');
  if (c2 > 1 || chk != s) {
    cout << "-1\n";
  } else {
    cout << max(c1 + c2, c3 + c2) << "\n";
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
