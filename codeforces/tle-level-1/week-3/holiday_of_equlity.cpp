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
  int ma = *max_element(a, a + n);
  int b = accumulate(a, a + n, 0,
                     [ma](int acc, int curr) { return acc += ma - curr; });
  cout << b << "\n";
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
