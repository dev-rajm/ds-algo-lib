#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int odd = 0;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if ((a[i] % 2) == 1) {
      odd++;
    }
  }

  if ((n % 2) == 1) {
    cout << -1 << "\n";
    return;
  }

  cout << abs((n / 2) - odd) << "\n";
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
