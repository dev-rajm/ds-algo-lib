#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  vector<int> a(2 * n);
  unordered_map<int, int> ump;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    ump[a[i]]++;
  }

  int u = 0, m = 0;
  for (auto &x : ump) {
    if (x.second == 1)
      u++;
    else
      m++;
  }

  ll best = u * 1 + m * 2;
  cout << max<ll>(best, 2LL * n) << "\n";
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
