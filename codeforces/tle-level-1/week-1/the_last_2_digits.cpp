#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long A, B, C, D;
  cin >> A >> B >> C >> D;

  A = A % 100;
  B = B % 100;
  C = C % 100;
  D = D % 100;

  long long ans = A * B * C * D;
  ans = ans % 100;

  if (ans < 10) {
    cout << "0" << ans;
  } else {
    cout << ans;
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
