#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  vector<ll> v(n);
  for(int i=0; i<n; i++) {
    cin >> v[i];
  }
  ll x = 0;
  for(int i=0; i<n-1; i++) {
    ll val1 = x + v[i];
    ll val2 = x - v[i] ;
    x += max(val1, val2);
  }
  cout << x << "\n";
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
