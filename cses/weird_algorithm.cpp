#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll n;
  cin >> n;
  cout << n << " ";
  while(n != 1) {
    if(n & 1) {
      n *= 3;
      n += 1;
    } else {
      n /= 2;
    }
    cout << n << " ";
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
