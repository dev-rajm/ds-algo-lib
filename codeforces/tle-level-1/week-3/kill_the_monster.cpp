#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll hc, dc, hm, dm, k, w, a;
  cin >> hc >> dc >> hm >> dm >> k >> w >> a;
  for (int i = 0; i <= k; i++) {
    ll h = hc + a * i;
    ll d = dc + w * (k-i);

    ll tc = (h + dm - 1) / dm;
    ll tm = (hm + d - 1) / d;
    if(tm <= tc) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
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
