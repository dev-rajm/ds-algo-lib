#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, i;
  string x, s;
  cin >> n >> m >> x >> s;

  int ans = -1;
  for(i=0; i<6; i++) {
    if(x.find(s) != string::npos) {
      ans = i;
      break;
    }
    x += x;
  }

  cout << ans << "\n";
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
