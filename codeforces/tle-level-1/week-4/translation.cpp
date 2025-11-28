#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s, t;
  cin >> s >> t;
  reverse(t.begin(), t.end());
  if(s==t) {
    cout << "YES";
  } else {
    cout << "NO";
  }

}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
