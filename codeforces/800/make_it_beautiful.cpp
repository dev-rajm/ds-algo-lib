#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n, greater<int>());
  if (a[0] == a[n - 1]) {
    cout << "NO\n";
    return;
  }

  if (a[0] == a[1]) {
    swap(a[1], a[n - 1]);
  }
  cout << "YES\n";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
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
