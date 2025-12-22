#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  vector<pair<ll, ll>> wp(n);
  for (int i = 0; i < n; i++) {
    ll w, p;
    cin >> w >> p;
    wp[i] = {w, p};
  }

  sort(wp.begin(), wp.end());

  const auto maxp = max_element(wp.begin(), wp.end(),
                          [](const pair<ll, ll> &a, const pair<ll, ll> &b) {
                            return a.second < b.second;
                          });

  ll sum = 0;
  for (int i = 0; i < n; i++) {
    if (sum <= maxp->second) {
      sum += wp[i].first;
    } else {
      cout << i + 1 << "\n";
      break;
    }
  }
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
