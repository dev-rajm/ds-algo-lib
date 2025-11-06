#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, cnt;
  cin >> x;

  cnt = 0;
  for (int i = 1; i <= x; i++) {
    if ((x % i) == 0)
      cnt++;
  }
  cout << (cnt == 2 ? "YES" : "NO");
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
