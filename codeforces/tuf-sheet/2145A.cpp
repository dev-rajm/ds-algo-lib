#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  n = n%3;
  if(n==0)
    cout << "0\n";
  else
   cout << 3 - n << "\n";
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
