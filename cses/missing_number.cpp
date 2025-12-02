#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  ll sum = 0;
  for(int i=0; i<n-1; i++) {
    int x;
    cin >> x;
    sum += x;
  }
  cout << (ll) (n*(n+1LL))/2LL - sum;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();

  return 0;
}
