#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a, b;
  cin >> n >> a >> b;

  if(n == a && a == b) {
    cout << "YES\n";
    return;
  }

  if(n - (a+b) >= 2) {
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
