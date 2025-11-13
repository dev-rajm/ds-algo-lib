#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    if (b == 1) {
      cout << "HARD";
      return;
    }
  }
  cout << "EASY";
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
