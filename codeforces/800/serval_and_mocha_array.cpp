#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; ++i) {
    cin >> a[i];
  }
  for(int i=0; i<n; ++i) {
    for(int j=i+1; j<n; ++j) {
      if(__gcd(a[i], a[j]) <= 2) {
        cout << "YES\n";
        return;
      }
    }
  }
  cout << "NO\n";
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
