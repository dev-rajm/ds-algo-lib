#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll n, q;
  cin >> n >> q;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll og_sum = 0;
  for (int i = 0; i < n; i++) {
    og_sum += a[i];
  }

  vector<ll> prefix_sum(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
  }

  while (q--) {
    ll l, r, k;
    cin >> l >> r >> k;
    ll sum_to_remove = prefix_sum[r] - prefix_sum[l - 1];
    ll sum_to_add = (r - l + 1) * k;
    ll new_sum = og_sum - sum_to_remove + sum_to_add;
    if (new_sum & 1) {
      cout << "YES";
    } else {
      cout << "NO";
    }
    cout << "\n";
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
