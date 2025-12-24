#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll n;
  cin >> n;
  for(ll i=1; i<=n; i++) {
    cout << (i-1)*(i+4)*(i*i - 3*i + 4) / 2 << "\n";
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
