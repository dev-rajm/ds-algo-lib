#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  if (a[0] == -1) {
    if (a[n - 1] == -1) {
      a[0] = a[n - 1] = 0;
    } else {
      a[0] = a[n - 1];
    }
  } else {
    if (a[n - 1] == -1) {
      a[n - 1] = a[0];
    }
  }
  int diff = 0;
  for (int i = 0; i < n - 1; ++i) {
    diff += (a[i + 1] - a[i]);
  }
  cout << abs(diff) << '\n';
  for (int i = 0; i < n; ++i) {
    cout << (a[i] == -1 ? 0 : a[i]) << " ";
  }
  cout << "\n";
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
