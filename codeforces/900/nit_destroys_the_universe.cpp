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
  int start = -1, end = -1;
  for (int i = 0; i < n; i++) {
    if (start == -1 && a[i] != 0) {
      start = i;
    }
    if (end == -1 && a[n - 1 - i] != 0) {
      end = n - 1 - i;
    }
    if (start != -1 && end != -1) {
      break;
    }
  }
  if (start == -1) {
    cout << "0\n";
    return;
  }
  int mi = *min_element(a + start, a + end);
  if (mi == 0) {
    cout << "2\n";
  } else {
    cout << "1\n";
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
