#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a+n);
  for(int i=2; i<n; i+=2) {
    if(a[i-1] != a[i]) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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
