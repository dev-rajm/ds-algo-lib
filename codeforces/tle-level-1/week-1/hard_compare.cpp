#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long a,b,c,d;
  cin >> a >> b >> c >> d;

  if((b*log(a) > d*log(c))) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();

  return 0;
}
