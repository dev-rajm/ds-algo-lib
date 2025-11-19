#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  string s;
  cin >> n >> s;

  int stack = 1;
  int max_stack = 1;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) {
      stack++;
    } else {
      stack = 1;
    }
    max_stack = max(max_stack, stack);
  }
  cout << max_stack + 1 << "\n";
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
