#include <bits/stdc++.h>
using namespace std;

void solve() {
  int k, s;
  cin >> k >> s;

  int x, y, z, counter = 0;
  for(x=0; x<=k; x++) {
    for(y=0; y<=k; y++) {
      z = s - (x+y);
      if(z >= 0 && z <= k) {
        counter++;
      }
    }
  }

  cout << counter;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
