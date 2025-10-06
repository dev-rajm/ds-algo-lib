#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  int low = 0, high = 1e6;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    int need = 0;
    for (int i = 0; i < n; i++) {
      int req = a[i] * mid - b[i];
      if (req > 0) {
        need += req;
        if (need > k) {
          break;
        }
      }
    }

    if (need <= k) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  cout << high;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
