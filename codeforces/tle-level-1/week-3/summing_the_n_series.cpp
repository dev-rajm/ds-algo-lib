#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007LL
using ll = long long;
using ld = long double;

void solve() {
  ll n;
  cin >> n;
  cout << ((n % MOD) * (n % MOD)) % MOD << "\n";
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
