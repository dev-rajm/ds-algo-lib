#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n, k;
  cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  int possible = 1;
  int max_possible = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] - a[i - 1] <= k) {
      possible++;
    } else {
      possible = 1;
    }
    max_possible = max(max_possible, possible);
  }

  cout << n - max_possible << "\n";
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
