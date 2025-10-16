#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  
  int v[n];
  for(int i=0; i<n; i++) {
    cin >> v[i];
  }

  if(is_sorted(v, v+n) || k>1) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
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
