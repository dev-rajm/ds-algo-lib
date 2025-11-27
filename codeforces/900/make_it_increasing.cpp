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
  ll ans = 0;
  for(int i=n-2; i>=0; i--) {
    while(a[i] >= a[i+1]) {
      ans++;
      a[i] /= 2;
      if(a[i] == 0) {
        break;
      }
    }
    if(a[i] == 0 && a[i+1] == 0) {
      ans = -1;
      break;
    }
  }
  cout << ans << "\n";
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
