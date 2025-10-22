#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  
  vector<int> a(101, 0);
  for(int i=0; i<n; i++) {
    int b;
    cin >> b;
    a[b]++;
  }
  cout << (a[k] == 0 ? "NO" : "YES") << "\n";
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
