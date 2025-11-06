#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  for(int i=2; i<=n; i++) {
    bool f = true;
    for(int j=2; j<i; j++) {
      if(i%j == 0) {
        f = false;
        break;
      }
    }
    if(f) cout << i << " ";
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
