#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string n;
  cin >> n;
  bool ok = true;
  for (int i = 0; i < n.size();) {
    if (n.substr(i, 3) == "144") {
      i += 3;
    } else if (n.substr(i, 2) == "14") {
      i += 2;
    } else if (n[i] == '1') {
      i += 1;
    } else {
      ok = false;
      break;
    }
  }
  if (ok)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();

  return 0;
}
