#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k;
  cin >> n >> k;
  
  for(int i=0; i<2; i++) {
    if((n - i * k) >= 0 && (n - i * k)%2 == 0) {
      cout << "YES\n";
      return;
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
