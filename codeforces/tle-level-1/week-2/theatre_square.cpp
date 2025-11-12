#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, m, a;
  cin >> n >> m >> a;
  cout << ((m + a - 1) / a) * ((n + a - 1) / a);
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();

  return 0;
}
