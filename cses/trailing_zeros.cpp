#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  int ans = 0;
  for(int i=5; n/i >= 1; i*= 5) {
    ans += n/i;
  }
  cout << ans;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
