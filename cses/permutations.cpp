#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  if (n > 1 && n < 4) {
    cout << "NO SOLUTION";
    return;
  }

  if (n & 1) {
    for (int i = 1; i <= n; i += 2) {
      cout << i << " ";
    }
    for (int i = 2; i < n; i += 2) {
      cout << i << " ";
    }
  } else {
    for (int i = 2; i <= n; i += 2) {
      cout << i << " ";
    }
    for (int i = 1; i < n; i += 2) {
      cout << i << " ";
    }
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
