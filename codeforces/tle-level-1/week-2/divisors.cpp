#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i * i <= n; i++) {
    if ((n % i) == 0) {
      cout << i << "\n";
    }
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
