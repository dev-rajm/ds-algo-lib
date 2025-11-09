#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  int twos = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 2) {
      twos++;
    }
  }

  if (twos == 0) {
    cout << "1\n";
    return;
  }
  if ((twos % 2) == 1) {
    cout << "-1\n";
  } else {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == 2) {
        cnt++;
        if ((twos / 2) == cnt) {
          cout << i + 1 << "\n";
          break;
        }
      }
    }
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
