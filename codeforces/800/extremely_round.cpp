#include <bits/stdc++.h>
using namespace std;

bool check(int x) {
  string s = to_string(x);
  int cnt = 0;
  for (char ch : s) {
    if (ch != '0') {
      cnt++;
    }
  }
  return cnt == 1;
}

vector<int> a;

void solve() {
  int n;
  cin >> n;
  int ans = 0;
  for (int x : a) {
    if (x <= n) {
      ans++;
    }
  }

  cout << ans << "\n";
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  for (int i = 1; i < 1000000; i++) {
    if (check(i)) {
      a.push_back(i);
    }
  }

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
