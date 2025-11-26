#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

int smallestRepunitDivByK(int k) {
  if((k%2) == 0) {
    return -1;
  }
  int rem = 0;
  for(int i=1; i<=k ; i++) {
    rem = (i*10+1)%k;
    if(rem == 0) {
      return i;
    }
  }
  return -1;
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
