#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int xr = 0;
  for (int x : a) {
    xr ^= x;
  }

  if (xr == 0) {
    cout << "0\n";
  } else {
    if ((n % 2) == 1) {
      cout << xr;
    } else {
      cout << "-1";
    }
    cout << "\n";
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
