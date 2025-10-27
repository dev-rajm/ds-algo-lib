#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, x;
  cin >> n >> k >> x;
  
  if(x != 1) {
    cout << "YES\n";
    cout << n << "\n";
    for(int i=1; i<=n; i++) {
      cout << "1 ";
    }
    cout << "\n";
  }
  else if(k==1 || (k == 2 && (n%2)==1)) {
    cout << "NO\n";
  }
  else {
    cout << "YES\n";
    cout << (n/2) << "\n";
    cout << ((n%2) == 1 ? 3 : 2) << " ";
    for(int i=1; i<(n/2); i++) {
      cout << 2 << " ";
    }
    cout << "\n";
  }
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
