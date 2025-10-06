#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k;
  cin >> n >> k;

  long long need = n-1;
  long long maxPble = (k-1)*k/2;

  if(need > maxPble) {
    cout << "-1";
  }
  else {
    long long splitters = 0;
    for(long long i=k-1; i>=1 && need > 0; i--) {
      if(i <= need) {
        need -= i;
        splitters++;
      }
    }
    cout << splitters;
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
