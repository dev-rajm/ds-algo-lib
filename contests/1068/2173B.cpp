#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int b[n];
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  long long k_min = 0, k_max = 0;

  for (int i = 0; i < n; i++) {
    long long r_min = k_min - a[i];
    long long r_max = k_max - a[i];

    long long b_min = b[i] - k_max;
    long long b_max = b[i] - k_min;

    long long new_min = min(r_min, b_min);
    long long new_max = max(r_max, b_max);

    k_min = new_min;
    k_max = new_max;
  }

  cout << k_max << "\n";
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
