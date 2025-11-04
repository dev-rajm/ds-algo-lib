#include <bits/stdc++.h>
using namespace std;

void solve() {
  double n;
  cin >> n;

  if(n == (int)n) {
    cout << "int " << n;
  }
  else {
    cout << "float " << (int)n << " " << n - (int)n;
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();

  return 0;
}
