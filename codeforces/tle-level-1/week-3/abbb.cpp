#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;
  int stk = 0;
  for (int i = 0; i < s.size(); i++) {
    if (stk && s[i] == 'B')
      stk--;
    else
      stk++;
  }
  cout << stk << "\n";
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
