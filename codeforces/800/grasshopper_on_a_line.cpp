#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, k;
  cin >> x >> k;

  if((x%k) != 0) {
    cout << "1\n";
    cout << x << "\n";
  }
  else {
    cout << "2\n";
    cout << "1 " << x - 1 << "\n";
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
