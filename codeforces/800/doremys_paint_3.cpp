#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, b, i;
  cin >> n;

  map<int, int> mpp;
  for (i = 0; i < n; i++) {
    cin >> b;
    mpp[b]++;
  }

  if (mpp.size() >= 3) {
    cout << "NO\n";
  } else {
    if (abs(mpp.begin()->second - mpp.rbegin()->second) <= 1) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
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
