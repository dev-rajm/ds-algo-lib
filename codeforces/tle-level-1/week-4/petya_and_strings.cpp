#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s, t;
  cin >> s >> t;
  transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
    return static_cast<unsigned char>(tolower(c));
  });
  transform(t.begin(), t.end(), t.begin(), [](unsigned char c) {
    return static_cast<unsigned char>(tolower(c));
  });
  if (s == t) {
    cout << "0";
  } else if (s > t) {
    cout << "1";
  } else {
    cout << "-1";
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
