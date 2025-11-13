#include <bits/stdc++.h>
using namespace std;

void solve() {
  int y;
  cin >> y;
  for (int i = y + 1; i <= 10000; i++) {
    string sy = to_string(i);
    unordered_set<char> ust(sy.begin(), sy.end());
    if (ust.size() == 4) {
      cout << i;
      return;
    }
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
