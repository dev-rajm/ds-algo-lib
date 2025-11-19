#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  int zeros = 0;
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    if (b == 0)
      zeros++;
  }

  if (zeros == n) {
    cout << "0\n";
    return;
  }
  if (n & 1) {
    cout << "4\n";
    cout << "1 " << n - 1 << "\n";
    cout << "1 " << n - 1 << "\n";
    cout << n - 1 << " " << n << "\n";
    cout << n - 1 << " " << n << "\n";
  } else {
    cout << "2\n";
    cout << "1 " << n << "\n";
    cout << "1 " << n << "\n";
  }
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
