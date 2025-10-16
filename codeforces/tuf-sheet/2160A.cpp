#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> A(n);
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < n; i++) {
    mp[A[i]]++;
  }

  for (int i = 0; i < 105; i++) {
    if (mp[i] == 0) {
      cout << i << "\n";
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
