#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define MOD 1000000007

void solve() {
  int n;
  cin >> n;
  ll m = 1;
  for(int i=0; i<n; i++) {
    m += (m % MOD);
  }

  cout << m % MOD;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
