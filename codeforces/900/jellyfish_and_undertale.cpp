#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int a, b, n;
  cin >> a>> b >> n;
  ll sum =(ll) b;
  for(int i=0; i<n; i++) {
    int x;
    cin >>x;
    sum += (ll) min(a-1, x);
  }
  cout << sum << "\n";
}

int32_t main() {
   ios::sync_with_stdio(false);
   cin.tie(0);

   int tc;
   cin >> tc;
   while(tc--) {
       solve();
   }

   return 0;
}
