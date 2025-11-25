#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

int smallestRepunitDivByK(int k) {
  if((k%2) == 0) {
    return -1;
  }
  ll n=1LL;
  while(n%k != 0) {
    n = n*10+1LL;
  }
  return log10(n)+1;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tc;
  cin >> tc;
  while (tc--) {
    int k;
    cin >> k;
    cout << smallestRepunitDivByK(k) << "\n";
  }

  return 0;
}
