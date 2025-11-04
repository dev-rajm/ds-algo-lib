#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b;
  char s;
  cin >> a >> s >> b;

  if (s == '<') {
    cout << (a < b ? "Right" : "Wrong");
  } else if (s == '>') {
    cout << (a > b ? "Right" : "Wrong");
  } else {
    cout << (a == b ? "Right" : "Wrong");
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
